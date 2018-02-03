typedef int numSize;

bool is_prime(numSize n){
    if(n < 2){
        return false;
    }
    else if(n == 2){
        return true;
    }
    else if ((1&n) == 0){
        return false;
    }else{
        for(numSize i = 3; i*i <= n; i+=2){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
}
