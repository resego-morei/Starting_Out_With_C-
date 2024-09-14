//This is a program that calculates retail price formulas for a small business.
//got it from the following website https://www.cin7.com/blog/how-to-calculate-retail-price/#:~:text=The%20formula%20to%20calculate%20retail,producing%20or%20acquiring%20the%20product.

#include <iostream>
#include <iomanip>

using namespace std;

double calculateCOGS(double, double, double, double, double);
double calculateContributionMargin(double, double);
double calculateBreakEven(double, double);
double calculateNetSales(double, double, double, double);
double calculateAverageInventory(double, double);
double calculateGrossMargin(double, double);
double calculateGMROI(double, double);
double calculateInventoryTurnover(double, double);
double calculateIMUValue(double, double);
double calculateIMUPercentage(double, double);
double calculateMMUValue(double, double, double);
double calculateMMUPercentage(double, double);
double calculateOpenToBuy(double, double, double, double);
double calculateQuickRatio(double, double, double);
double calculateSellThroughRate(double, double);
double calculateStockToSalesRatio(double, double);
double calculateSalesPerSquareFoot(double, double);


void displayMenu();

int main() {
    int choice;
    
    do {
        displayMenu();
        cout << "Select an option (1-15) or 0 to exit: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                // COGS Calculation
                double beginningInventory, purchases, labor, materials, endingInventory;
                cout << "Enter Beginning Inventory: ";
                cin >> beginningInventory;
                cout << "Enter Purchases: ";
                cin >> purchases;
                cout << "Enter Cost of Labor: ";
                cin >> labor;
                cout << "Enter Materials and Supplies: ";
                cin >> materials;
                cout << "Enter Ending Inventory: ";
                cin >> endingInventory;

                double cogs = calculateCOGS(beginningInventory, purchases, labor, materials, endingInventory);
                cout << "Cost of Goods Sold (COGS): R" << fixed << setprecision(2) << cogs << endl;
                break;
            }
            case 2: {
                // Contribution Margin Calculation
                double totalSales, variableCosts;
                cout << "Enter Total Sales: ";
                cin >> totalSales;
                cout << "Enter Variable Costs: ";
                cin >> variableCosts;

                double contributionMargin = calculateContributionMargin(totalSales, variableCosts);
                cout << "Contribution Margin: R" << fixed << setprecision(2) << contributionMargin << endl;
                break;
            }
            case 3: {
                // Break-Even Analysis Calculation
                double fixedCosts, contributionMargin;
                cout << "Enter Fixed Costs: ";
                cin >> fixedCosts;
                cout << "Enter Contribution Margin: ";
                cin >> contributionMargin;

                double breakEvenPoint = calculateBreakEven(fixedCosts, contributionMargin);
                cout << "Break-Even Point: " << fixed << setprecision(2) << breakEvenPoint << " units" << endl;
                break;
            }
            case 4: {
                // Net Sales Calculation
                double grossSales, returns, allowances, discounts;
                cout << "Enter Gross Sales: ";
                cin >> grossSales;
                cout << "Enter Returns: ";
                cin >> returns;
                cout << "Enter Allowances: ";
                cin >> allowances;
                cout << "Enter Discounts: ";
                cin >> discounts;

                double netSales = calculateNetSales(grossSales, returns, allowances, discounts);
                cout << "Net Sales: R" << fixed << setprecision(2) << netSales << endl;
                break;
            }
            case 5: {
                // Average Inventory Calculation
                double beginningInventory, endingInventory;
                cout << "Enter Beginning Inventory: ";
                cin >> beginningInventory;
                cout << "Enter Ending Inventory: ";
                cin >> endingInventory;

                double averageInventory = calculateAverageInventory(beginningInventory, endingInventory);
                cout << "Average Inventory: R" << fixed << setprecision(2) << averageInventory << endl;
                break;
            }
            case 6: {
                // Gross Margin Calculation
                double totalSales, cogs;
                cout << "Enter Total Sales: ";
                cin >> totalSales;
                cout << "Enter COGS: ";
                cin >> cogs;

                double grossMargin = calculateGrossMargin(totalSales, cogs);
                cout << "Gross Margin: R" << fixed << setprecision(2) << grossMargin << endl;
                break;
            }
            case 7: {
                // GMROI Calculation
                double grossMargin, avgInventoryCost;
                cout << "Enter Gross Margin: ";
                cin >> grossMargin;
                cout << "Enter Average Inventory Cost: ";
                cin >> avgInventoryCost;

                double gmroi = calculateGMROI(grossMargin, avgInventoryCost);
                cout << "GMROI: " << fixed << setprecision(2) << gmroi << endl;
                break;
            }
            case 8: {
                // Inventory Turnover Calculation
                double cogs, avgInventoryValue;
                cout << "Enter COGS: ";
                cin >> cogs;
                cout << "Enter Average Inventory Value: ";
                cin >> avgInventoryValue;

                double inventoryTurnover = calculateInventoryTurnover(cogs, avgInventoryValue);
                cout << "Inventory Turnover: " << fixed << setprecision(2) << inventoryTurnover << endl;
                break;
            }
            case 9: {
                // IMU Calculation
                double price, cogs;
                cout << "Enter Ticket Price: ";
                cin >> price;
                cout << "Enter COGS: ";
                cin >> cogs;

                double imuValue = calculateIMUValue(price, cogs);
                double imuPercentage = calculateIMUPercentage(price, cogs);

                cout << "Initial Markup (IMU) Value: R" << fixed << setprecision(2) << imuValue << endl;
                cout << "Initial Markup (IMU) Percentage: " << fixed << setprecision(2) << imuPercentage << "%" << endl;
                break;
            }
             case 10: {
                // MMU Calculation
                double salePrice, discounts, COGS, netSales;
                cout << "Enter Sale Price: ";
                cin >> salePrice;
                cout << "Enter Discounts or Markdowns: ";
                cin >> discounts;
                cout << "Enter COGS: ";
                cin >> COGS;
                cout << "Enter Net Sales: ";
                cin >> netSales;

                double MMUValue = calculateMMUValue(salePrice, discounts, COGS);
                double MMUPercentage = calculateMMUPercentage(MMUValue, netSales);
                cout << "MMU Value: R" << fixed << setprecision(2) << MMUValue << endl;
                cout << "MMU Percentage: " << fixed << setprecision(2) << MMUPercentage << "%" << endl;
                break;
            }
            case 11: {
                // Open to Buy Calculation
                double plannedSales, plannedMarkdowns, plannedEndInventory, plannedBeginInventory;
                cout << "Enter Planned Sales: ";
                cin >> plannedSales;
                cout << "Enter Planned Markdowns: ";
                cin >> plannedMarkdowns;
                cout << "Enter Planned End of Month Inventory: ";
                cin >> plannedEndInventory;
                cout << "Enter Planned Beginning of Month Inventory: ";
                cin >> plannedBeginInventory;

                double openToBuy = calculateOpenToBuy(plannedSales, plannedMarkdowns, plannedEndInventory, plannedBeginInventory);
                cout << "Open to Buy: R" << fixed << setprecision(2) << openToBuy << endl;
                break;
            }
            case 12: {
                // Quick Ratio Calculation
                double assets, inventory, liabilities;
                cout << "Enter Assets: ";
                cin >> assets;
                cout << "Enter Inventory: ";
                cin >> inventory;
                cout << "Enter Liabilities: ";
                cin >> liabilities;

                double quickRatio = calculateQuickRatio(assets, inventory, liabilities);
                cout << "Quick Ratio: " << fixed << setprecision(2) << quickRatio << endl;
                break;
            }
            case 13: {
                // Sell-Through Rate Calculation
                double unitsSold, unitsReceived;
                cout << "Enter Units Sold: ";
                cin >> unitsSold;
                cout << "Enter Units Received: ";
                cin >> unitsReceived;

                double sellThroughRate = calculateSellThroughRate(unitsSold, unitsReceived);
                cout << "Sell-Through Rate: " << fixed << setprecision(2) << sellThroughRate << "%" << endl;
                break;
            }
            case 14: {
                // Stock-to-Sales Ratio Calculation
                double beginningInventory, monthlySales;
                cout << "Enter Beginning of Month Inventory: ";
                cin >> beginningInventory;
                cout << "Enter Monthly Sales: ";
                cin >> monthlySales;

                double stockToSalesRatio = calculateStockToSalesRatio(beginningInventory, monthlySales);
                cout << "Stock-to-Sales Ratio: " << fixed << setprecision(2) << stockToSalesRatio << endl;
                break;
            }
            case 15: {
                // Sales per Square Foot Calculation
                double totalSales, retailSpace;
                cout << "Enter Total Sales: ";
                cin >> totalSales;
                cout << "Enter Total Square Footage of Retail Space: ";
                cin >> retailSpace;

                double salesPerSquareFoot = calculateSalesPerSquareFoot(totalSales, retailSpace);
                cout << "Sales per Square Foot: R" << fixed << setprecision(2) << salesPerSquareFoot << endl;
                break;
            }
            case 0:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option from the menu." << endl;
        }

        cout << endl;
    } while (choice != 0);
    
    return 0;
}

// Function definitions
double calculateCOGS(double beginningInventory, double purchases, double labor, double materials, double endingInventory) {
    return (beginningInventory + purchases + labor + materials) - endingInventory;
}

double calculateContributionMargin(double totalSales, double variableCosts) {
    return totalSales - variableCosts;
}

double calculateBreakEven(double fixedCosts, double contributionMargin) {
    if (contributionMargin == 0) {
        cout << "Error: Contribution margin cannot be zero." << endl;
        return -1; 
    }
    return fixedCosts / contributionMargin;
}

double calculateNetSales(double grossSales, double returns, double allowances, double discounts) {
    return grossSales - (returns + allowances + discounts);
}

double calculateAverageInventory(double beginningInventory, double endingInventory) {
    return (beginningInventory + endingInventory) / 2;
}

double calculateGrossMargin(double totalSales, double cogs) {
    return totalSales - cogs;
}

double calculateGMROI(double grossMargin, double avgInventoryCost) {
    return grossMargin / avgInventoryCost;
}

double calculateInventoryTurnover(double cogs, double avgInventoryValue) {
    return cogs / avgInventoryValue;
}

double calculateIMUValue(double price, double cogs) {
    return price - cogs;
}

double calculateIMUPercentage(double price, double cogs) {
    return ((price - cogs) / price) * 100;
}

double calculateMMUValue(double salePrice, double discounts, double COGS) {
    return (salePrice - discounts) - COGS;
}

double calculateMMUPercentage(double MMUValue, double netSales) {
    return (MMUValue / netSales) * 100;
}

double calculateOpenToBuy(double plannedSales, double plannedMarkdowns, double plannedEndInventory, double plannedBeginInventory) {
    return plannedSales + plannedMarkdowns + plannedEndInventory - plannedBeginInventory;
}

double calculateQuickRatio(double assets, double inventory, double liabilities) {
    return (assets - inventory) / liabilities;
}

double calculateSellThroughRate(double unitsSold, double unitsReceived) {
    return (unitsSold / unitsReceived) * 100;
}

double calculateStockToSalesRatio(double beginningInventory, double monthlySales) {
    return beginningInventory / monthlySales;
}

double calculateSalesPerSquareFoot(double totalSales, double retailSpace) {
    return totalSales / retailSpace;
}

void displayMenu() {
    cout << "Financial Calculation for Small Business:" << endl;
    cout << "1. Calculate Cost of Goods Sold (COGS)" << endl;
    cout << "2. Calculate Contribution Margin" << endl;
    cout << "3. Calculate Break-Even Analysis" << endl;
    cout << "4. Calculate Net Sales" << endl;
    cout << "5. Calculate Average Inventory" << endl;
    cout << "6. Calculate Gross Margin" << endl;
    cout << "7. Calculate GMROI" << endl;
    cout << "8. Calculate Inventory Turnover" << endl;
    cout << "9. Calculate Initial Markup (IMU)" << endl;
    cout << "10. Calculate Markdown Markup (MMU)" << endl;
    cout << "11. Calculate Open to Buy" << endl;
    cout << "12. Calculate Quick Ratio" << endl;
    cout << "13. Calculate Sell-Through Rate" << endl;
    cout << "14. Calculate Stock-to-Sales Ratio" << endl;
    cout << "15. Calculate Sales per Square Foot" << endl;
    cout << "0. Exit" << endl;
}
