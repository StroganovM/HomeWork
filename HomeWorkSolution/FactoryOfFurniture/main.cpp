#include<iostream>

struct Dimension {
	int height;
	int depth;
	int width;
};
void DimensionInput(struct Dimension* sizes) {
	int height, depth, width;
	std::cout << "Input height: ";
	std::cin >> height;
	std::cout << "Input depth: ";
	std::cin >> depth;
	std::cout << "Input width: ";
	std::cin >> width;

	sizes->height = height;
	sizes->depth = depth;
	sizes->width = width;
}
int calculateCupboardSquare(struct Dimension sizes) {
	int sideSquare, upAndDownSquare, frontSquae, square;
	sideSquare = 2 * sizes.height * sizes.depth;
	upAndDownSquare = 2 * sizes.width * sizes.depth;
	frontSquae = sizes.width * sizes.height;
	square = sideSquare + upAndDownSquare + frontSquae;
	return square;
}
float calculateConsumOfDye(struct Dimension sizes, float consum) {
	int square = calculateCupboardSquare(sizes);
	float consumeOfDye = square * consum;
	return consumeOfDye;
}
float calculateCostOfDye(int cupboardSquare, float consumeOfDye, float workCost, float dyeCost) {
	float totalDyeConsume = consumeOfDye * dyeCost;
	float totalWorkCost = cupboardSquare * workCost;
	return (totalDyeConsume + totalWorkCost);
}
float calculateCostOfCupboard(struct Dimension sizes, float materialsCost) {
	return (calculateCupboardSquare(sizes) * materialsCost);
}
float calculateWeightOfCupboard(struct Dimension sizes, float weight) {
	return (calculateCupboardSquare(sizes) * weight / 10);
}
float calculateCostOfLifting(struct Dimension sizes, float costOfLifting, int floors, float weight) {
	return (costOfLifting * calculateWeightOfCupboard(sizes, weight) * floors);
}
float calculateTotalCost(float deliveryCost, float costOfDye, float CostOfCupboard, float costOfLifting) {
	return (deliveryCost + costOfDye + CostOfCupboard + costOfLifting);
}
int main() {
	struct Dimension cupboard;
	std::cout << "Properties of cupboard \n";
	DimensionInput(&cupboard);
	float consum = 0.8, workCost = 35.00, dyeCost = 50.00;
	float totalDyeConsume = calculateConsumOfDye(cupboard, consum);
	float totalDyeCost = calculateCostOfDye(calculateCupboardSquare(cupboard), totalDyeConsume, workCost, dyeCost);
	float materialsCost = 650;
	float costOfCupboard = calculateCostOfCupboard(cupboard, materialsCost);
	float weight = 0.9;
	float weightOfCupboard = calculateWeightOfCupboard(cupboard, weight);
	int floors = 5;
	float costOfLiftingPerFloor = 2.50;
	float costOfLifting = calculateCostOfLifting(cupboard, costOfLiftingPerFloor, floors, weightOfCupboard);
	float deliveryCost = 500.00*costOfLifting;
	float totalCost = calculateTotalCost(deliveryCost, totalDyeCost, costOfCupboard, costOfLifting);
	std::cout << "Cost by position: " << "\n" << " 1)cupboard cost: " << costOfCupboard << "\n" << " 2)dyeing cost: " << totalDyeCost << "\n" << " 3)delivery cost: " << deliveryCost << "\n" << "Total cost: " << totalCost << "\n";
	system("pause");
	return 0;
}