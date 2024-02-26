

#ifndef MCAL_ADC_ADC_INT_H_
#define MCAL_ADC_ADC_INT_H_

ES_t ADC_enuInit(void);


ES_t ADC_enuStartConversion(void);

ES_t ADC_enuRead(u16 * Copy_pu16Value);



ES_t ADC_enuPollingRead(u16 * Copy_pu16ADCValue);


#endif 
