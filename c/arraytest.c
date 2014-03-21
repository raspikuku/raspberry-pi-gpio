#inc
lude <stdio.h>

void set_pin(pin_index, pin_state):
    if pin_state == -1:
        GPIO.setup(pins[pin_index], GPIO.IN)
    else:
        GPIO.setup(pins[pin_index], GPIO.OUT)
        GPIO.output(pins[pin_index], pin_state)

void light_led(led_number):
    for pin_index, pin_state in enumerate(pin_led_states[led_number]):
        set_pin(pin_index, pin_state)


int main()
{
	int led_states[30][6] = { 

  {-1, -1, -1, -1,  1, 0}, 
  {-1, -1, -1,  1, -1, 0}, 
  {-1, -1,  1, -1, -1, 0}, 
  {-1,  1, -1, -1, -1, 0}, 
  { 1, -1, -1, -1, -1, 0}, 
  
  {-1, -1, -1, -1, 0,  1}, 
  {-1, -1, -1,  1, 0, -1}, 
  {-1, -1,  1, -1, 0, -1}, 
  {-1,  1, -1, -1, 0, -1}, 
  { 1, -1, -1, -1, 0, -1}, 
  
  {-1, -1, -1, 0, -1,  1}, 
  {-1, -1, -1, 0,  1, -1}, 
  {-1, -1,  1, 0, -1, -1}, 
  {-1,  1, -1, 0, -1, -1}, 
  { 1, -1, -1, 0, -1, -1}, 
  
  {-1, -1, 0, -1, -1,  1}, 
  {-1, -1, 0, -1,  1, -1}, 
  {-1, -1, 0,  1, -1, -1}, 
  {-1,  1, 0, -1, -1, -1}, 
  { 1, -1, 0, -1, -1, -1}, 
  
  {-1, 0, -1, -1, -1,  1}, 
  {-1, 0, -1, -1,  1, -1}, 
  {-1, 0, -1,  1, -1, -1}, 
  {-1, 0,  1, -1, -1, -1}, 
  { 1, 0, -1, -1, -1, -1}, 
  
  {0, -1, -1, -1, -1,  1}, 
  {0, -1, -1, -1,  1, -1}, 
  {0, -1, -1,  1, -1, -1}, 
  {0, -1,  1, -1, -1, -1}, 
  {0,  1, -1, -1, -1, -1} 

	};

	int i;

	for(i=0; i<=5; i++)
	{
		printf("\nNo: [%d]", led_states[3][i]);
	}
}
