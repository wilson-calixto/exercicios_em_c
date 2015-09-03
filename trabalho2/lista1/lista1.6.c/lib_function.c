
int is_hour(int hora){
    if (hora >= 0 && hora < 24 ){
        return 1;
    }else{
        return 0;
    }
}

int is_minute(int minuto){
    if(minuto >= 0 && minuto < 60){
        return 1;
    }else{
        return 0;
    }
}

int convert_hour(int hour){
    if(hour > 12){
        return hour-12;
    }else
        return hour;
}

char am_pm(int hour){
    if(hour > 12){
        return 'P';
    }else{
        return 'A';
    }
}
