#include <stdio.h>

int main(void) {
  float enteringTime, exitTime, totalTime;
  float carPrice, busPrice, truckPrice, motorPrice;
  int type, paymentType;

  printf("Please select your car type:\n");
  printf("1: Car\n2: Bus\n3: Truck\n4: Motorcycle\n");
  scanf("%d", &type);

  printf("Please select your payment type.\nFor cash, press 1. For card, press 2:\n");
  scanf("%d", &paymentType);

  if (type < 1 || type > 4 || paymentType < 1 || paymentType > 2) {
    printf("Invalid car type or payment type.\n");
    return 1; // error code
  }

  printf("Please enter your entering time: ");
  scanf("%f", &enteringTime);

  printf("Please enter the time that you exit: ");
  scanf("%f", &exitTime);

  totalTime = exitTime - enteringTime;

  carPrice = totalTime * 5;
  busPrice = totalTime * 6;
  truckPrice = totalTime * 6.5;
  motorPrice = totalTime * 3;

  float discount = (paymentType == 1) ? 0.1 : 0.0; // discount for cash payments

  float finalPrice = 0.0;

  switch (type) {
    case 1: // Car
      finalPrice = carPrice - (carPrice * discount);
      break;
    case 2: // Bus
      finalPrice = busPrice - (busPrice * discount);
      break;
    case 3: // Truck
      finalPrice = truckPrice - (truckPrice * discount);
      break;
    case 4: // Motorcycle
      finalPrice = motorPrice - (motorPrice * discount);
      break;
  }

  printf("Toplam Tutar: %.2f\n", finalPrice);

  return 0;
}

