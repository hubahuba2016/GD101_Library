#if defined(_WINDOWS) || defined(WIN32) || defined(_WIN32)
    #include "Platform\Windows\Audio.h"
    

//-----------------------------------------------------------------------------------------------------------
//		FOR ANDROID PLATFORM
//-----------------------------------------------------------------------------------------------------------
#elif defined(ANDROID)
    #include "Platform\Android\Audio.h"
    

//-----------------------------------------------------------------------------------------------------------
//		FOR WEBGL PLATFORM
//-----------------------------------------------------------------------------------------------------------
#elif defined(WEBGL)
    #include "Platform\WebGl\Audio.h"
    

//-----------------------------------------------------------------------------------------------------------
//		FOR PLAYSTATION_1 PLATFORM
//-----------------------------------------------------------------------------------------------------------
#elif defined(PLAYSTATION_1)
    #include "Platform\PlayStation_1\Audio.h"
    

//-----------------------------------------------------------------------------------------------------------
//		FOR PLAYSTATION_2 PLATFORM
//-----------------------------------------------------------------------------------------------------------
#elif defined(PLAYSTATION_2)
    #include "Platform\PlayStation_2\Audio.h"

#endif