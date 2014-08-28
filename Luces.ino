int LedToPercent (int Led_out)        //returns LED output in %
{
  int result;

  if (Led_out==0) {
    result = 0; 
  }
  else {
    result = map(Led_out, 1, 255, 1, 100);  
  }

  return result; 
}
//---------------------------LED levels---------------------------
void LED_levels_output()

{
  
      if(NumMins(led_off_hora,led_off_minuto) > NumMins(led_on_hora,led_on_minuto))
      {
         if((NumMins(t.hour,t.min) >= (NumMins(led_on_hora,led_on_minuto) - amanecer_anochecer)) && (NumMins(t.hour,t.min) <= (NumMins(led_off_hora,led_off_minuto + amanecer_anochecer))))
         {
         
         if((NumMins(t.hour,t.min) >= (NumMins(led_on_hora,led_on_minuto) - amanecer_anochecer)) && (NumMins(t.hour,t.min) <= NumMins(led_on_hora,led_on_minuto)))
         { 
         wled_out = map(NumMins(t.hour,t.min),(NumMins(led_on_hora,led_on_minuto) - amanecer_anochecer), NumMins(led_on_hora,led_on_minuto), 0, pwm_pre_definido);
         }
         else if((NumMins(t.hour,t.min) >= NumMins(led_off_hora,led_off_minuto)) && (NumMins(t.hour,t.min) <= (NumMins(led_off_hora,led_off_minuto) + amanecer_anochecer)))
         {
         wled_out = map(NumMins(t.hour,t.min), NumMins(led_off_hora,led_off_minuto), (NumMins(led_off_hora,led_off_minuto) + amanecer_anochecer), pwm_pre_definido, 0);
         }
         else
         {
         wled_out = pwm_pre_definido;
         } 
         
         SetRele(ReleLuz, HIGH);

         }

      }
      
      
      else if(NumMins(led_off_hora,led_off_minuto) < NumMins(led_on_hora,led_on_minuto)) 
      {                   

          if(NumMins(t.hour,t.min) >= (NumMins(led_on_hora,led_on_minuto) - amanecer_anochecer)) 
          {   
            if((NumMins(t.hour,t.min) >= (NumMins(led_on_hora,led_on_minuto) - amanecer_anochecer)) && (NumMins(t.hour,t.min) <= NumMins(led_on_hora,led_on_minuto)))
            { 
              wled_out = map(NumMins(t.hour,t.min),(NumMins(led_on_hora,led_on_minuto) - amanecer_anochecer), NumMins(led_on_hora,led_on_minuto), 0, pwm_pre_definido);
             }
            else 
            {
              wled_out = pwm_pre_definido;
             }
          }
          else if(NumMins(t.hour,t.min) <= (NumMins(led_off_hora,led_off_minuto) + amanecer_anochecer))
          { 
            if((NumMins(t.hour,t.min) <= (NumMins(led_off_hora,led_off_minuto) + amanecer_anochecer)) && (NumMins(t.hour,t.min) >= NumMins(led_off_hora,led_off_minuto)))
            {
              wled_out = map(NumMins(t.hour,t.min),(NumMins(led_off_hora,led_off_minuto) + amanecer_anochecer), NumMins(led_off_hora,led_off_minuto), 0, pwm_pre_definido);
             }
            else 
            {
              wled_out = pwm_pre_definido;
             }
          }
          else
          {
            wled_out = 0;
            SetRele(ReleLuz, LOW);           
          }
        
        
      }


  float lunarCycle = moonPhase(t.year,t.mon, t.date); //get a value for the lunar cycle
  moonled_out = (MinI *(1 - lunarCycle)) + (MaxI * lunarCycle) + 0.5;
  
  if (MeanWell == true) 
  {
    w_out = wled_out;
    moonLed = moon_out;
  } 
  else 
  {
    w_out = 255 - wled_out;
    moon_out = 255 - moonled_out;
  }
  if(suavizar < 1)
  {
    w_out = suavizar * w_out;
    moon_out = suavizar * moon_out;    
  }




//********************************** Variacion de iluminacion en funcion del modo y temperatura
     if (led_estado == 0)            // Si seleccionamos en modo AUTO el valor sera 0 y se ejecuta la funcion normal
   {
  analogWrite(PWMLuz,    w_out * potenciaIluminacion / 100 ); // Añadido control de potencia de iluminacion
  analogWrite(ledPinMoon,  moon_out );                             // No afecta variacion iluminacion a led de noche

    }
    
    else if (led_estado == 1) // El estado del modo es ON entonces directamente enciende los leds al 100%    
    {
  analogWrite(PWMLuz,   255 ); // Se ilumina al 100%
  analogWrite(ledPinMoon,    moon_out ); // No le afecta a luz noche      
    }
    
    else if (led_estado == 2)
    {
  analogWrite(PWMLuz,   0 ); // Se apaga
  analogWrite(ledPinMoon,    moon_out ); // No le afecta a luz noche
    }
}

int check( byte *pt1, byte *pt2, int lstep)
{
  int result;
  float fresult;

  if (*pt1==*pt2) {
    result = *pt1;
  }   // No change
  else if (*pt1<*pt2)                //Increasing brightness
  { 
    fresult = ((float(*pt2-*pt1)/15.0) * float(lstep))+float(*pt1);
    result = int(fresult);
  }
  //Decreasing brightness
  else {
    fresult = -((float(*pt1-*pt2)/15.0) * float(lstep))+float(*pt1);
    result = int(fresult);                     
  } 
  return result;
}

