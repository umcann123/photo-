#define MAX_VALUE 9999
class people {
        int money;
        std::string name;
    public:
        people(std::string n){
            this->money = MAX_VALUE;
            this->name = n;

        };
        std::string get_name();
}; 
std::string people::get_name(){
    return this->name;
}