#include <iostream>
using namespace std;

typedef struct{
    int _code;
    double _cashier;
}Category;

typedef Category* ref_Category;

void category_start(ref_Category category, int code, double cashier){
    category->_code = code;
    category->_cashier = cashier;
}

void category_add_cash(ref_Category category, double value){
    category->_cashier += value;
}

void category_use_cash(ref_Category category, double value){
    category->_cashier -= value;
}

int category_code(ref_Category category){
    return category->_code;
}

double category_cashier(ref_Category category){
    return category->_cashier;
}

typedef struct{
    Category _health;
    Category _education;
    Category _safety;
    Category _welfare;
    Category _public_administration;
}Budget;

typedef Budget* ref_Budget;

ref_Category category_recover(ref_Budget budget, int code){
    switch(code){
        case 0: return &budget->_health;break;
        case 1: return &budget->_education;break;
        case 2: return &budget->_safety;break;
        case 3: return &budget->_welfare;break;
        case 4: return &budget->_public_administration;break;
        default: return nullptr;
    }
}

void budget_start(ref_Budget budget, double tax){
    category_start(&budget->_health,0,0.15*tax);
    category_start(&budget->_education,0,0.15*tax);
    category_start(&budget->_safety,0,0.20*tax);
    category_start(&budget->_welfare,0,0.35*tax);
    category_start(&budget->_public_administration,0,0.15*tax);
}

void category_spent(ref_Budget budget, int code,double value){
    ref_Category category = category_recover(budget, code);
    category_use_cash(category, value);
}

double category_sale(ref_Budget budget, int code){
    ref_Category category = category_recover(budget, code);
    return(category_cashier(category));
}

int main(){
    Budget budget;

    char test = 0;
    while(cin>>test){
        switch(test){
            case 'o':{
                double value = 0.0;
                cin>>value;
                budget_start(&budget,value);
            }
            break;
            case 'g':{
                int category = 0;
                double value = 0.0;
                cin>>category>>value;
                category_spent(&budget, category, value);
                cout<<category<<": "<<category_sale(&budget,category)<<endl;
            }
            break;
            case 'p': {
                for(int category=0; category<5; category++){
                    cout<<category<<": "<<category_sale(&budget,category)<<endl;
                }
            }
            break;
            default: {
                cout<<"----------"<<endl;
            }
            break;
        }
    }
    return(0);
}
