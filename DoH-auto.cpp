state("Dungon of Hinterburg"){
    int  isLoading 0x6004AB8;
}

exit
{
    timer.IsGameTimePaused = true;
}

isLoading
{
    return current.isLoading > 0;
}
