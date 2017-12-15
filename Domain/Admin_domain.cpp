#include "../Domain/Admin_domain.h"
#include "../UI/PizzaUI.h"
using namespace std;
Admin_domain::Admin_domain()
{

}
///Gets a cilumn from a line
string Admin_domain::get_column(string line, int column)
{
    
    stringstream stream;
    string found = "";
    stream << line;
    for(int i = 0; i < column; i++)
    {
        getline(stream,found,',');
    }
    return found;
}

///Topping check
void Admin_domain::check_topping_count(int counter) throw (InvalidToppingCount){
    //checking how many toppings
     if(cin.fail()){
        clear_input_stream();
        throw InvalidToppingCount();
     }
}

/*void Admin_domain::check_topping_ID(Topping& topping){
     string ToppingID = topping.get_id();
     for(unsigned int i = 0; i < ToppingID.length(); i++){
         if(!isdigit(ToppingID[i])){
            clear_input_stream();
        throw InvalidToppingID();
     }
     }
}*/

void Admin_domain::check_topping_Name(Topping& topping){
    //checking topping name
     string ToppingName = topping.get_name();
     for(unsigned int i = 0; i < ToppingName.length(); i++){
          if(isdigit(ToppingName[i])){
             clear_input_stream();
          throw InvalidToppingName(); //Throwing exception
     }
     }
}

void Admin_domain::check_topping_Price(Topping& topping){
    //checking price for topping
     if(cin.fail()){
        clear_input_stream();
        throw InvalidToppingPrice();//Throwing exception
     }
}

///Base check
void Admin_domain::check_base_count(int counter){
    //checking how many bases
     if(cin.fail()){
        clear_input_stream();
        throw InvalidBaseCount();//throwing exception
     }
}

void Admin_domain::check_base_name(Base& base){
    //checking the name for the base
    for(unsigned int i = 0; i < base.get_name().length(); i++){
     if(isdigit(base.get_name()[i])){
        throw InvalidBaseName();// Throwing exception if base name is invalid
     }
    }
}

void Admin_domain::check_base_price(Base& base){
    //checking price for base
     if(cin.fail()){
        clear_input_stream();
        throw InvalidBasePrice();//Throwing exception if base price is invalid
     }
}


void Admin_domain::check_size_count(int counter) throw (InvalidSizeCount){
    //size check
     if(cin.fail()){
        clear_input_stream();
        throw InvalidSizeCount();// Throwing exception for invalidSizeCount
     }
}

void Admin_domain::check_pizza_size_price(Pizza_size& pizzasize){
    //checking price for pizza size
      if(cin.fail()){
        clear_input_stream();
        throw Invalidsizeprice();//Throwing exception
     }
}

void Admin_domain::check_pizza_size(Pizza_size& pizzasize){

/*     if(!isdigit(pizzasize.get_size())){
        clear_input_stream();
        throw InvalidSize();
     }*/
}

///Location check
void Admin_domain::check_location_count(int counter){
    //checking location
     if(cin.fail()){
        clear_input_stream();
        throw InvalidLocationCount();//throwing exception for location
     }
}
void Admin_domain::check_location_name(Location& location){
    //checking if the name is right
    for(unsigned int i = 0; i < location.get_name().length(); i++){
          if(isdigit(location.get_name()[i])){
             clear_input_stream();
          throw InvalidLocationName(); // throwing exception if location name is invalid
     }
}
}

void Admin_domain::check_menu_count(int counter){
    //menu check
     if(cin.fail()){
        clear_input_stream();
        throw InvalidMenuCount();//throwing exception
     }
}

void Admin_domain::check_menu_name(Pizza_menu& pizzamenu){
    //checking if the name is right
         for(unsigned int i = 0; i < pizzamenu.get_name().length(); i++){
          if(isdigit(pizzamenu.get_name()[i])){
             clear_input_stream();
          throw InvalidPizzaMenuName(); //throwing exception if it's invalid
     }
}
}


string Admin_domain::find_ID(string line)
{
    //Takes a line and finds the id
    char splitchar = ',';
    stringstream stream(line);
    string ID = "";
    getline(stream,ID,splitchar);
    return ID;
}

vector<string> Admin_domain::read_all_toppings()
// reads all toppings
{
    Find_line findline;
    return findline.retrive_all_items("pizza_topping.txt");
}

void Admin_domain::clear_input_stream(){
    //clears the input stream
        cin.clear();
        cin.ignore();
}

Admin_domain::~Admin_domain()
{
    //dtor
}
