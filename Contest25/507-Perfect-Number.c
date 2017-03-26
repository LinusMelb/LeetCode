bool checkPerfectNumber(int num) {
    int i;
    int total = 1;
    for(i = 1; i < sqrt(num); i++){

        if(num % i == 0 && i != 1){

            total = total + num / i + i;
        }

    }

    if(total == num && num != 1){
        return true;
    }
    return false;

}
