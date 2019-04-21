/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   air_png;
    const int            air_pngSize = 10657;

    extern const char*   alicorn_png;
    const int            alicorn_pngSize = 10763;

    extern const char*   blue_blazer_png;
    const int            blue_blazer_pngSize = 7930;

    extern const char*   bold_png;
    const int            bold_pngSize = 5309;

    extern const char*   bolder_png;
    const int            bolder_pngSize = 3660;

    extern const char*   candy_png;
    const int            candy_pngSize = 7998;

    extern const char*   daybreak_png;
    const int            daybreak_pngSize = 7809;

    extern const char*   earth_png;
    const int            earth_pngSize = 7780;

    extern const char*   fire_png;
    const int            fire_pngSize = 5474;

    extern const char*   fireball_png;
    const int            fireball_pngSize = 4088;

    extern const char*   flamebow_png;
    const int            flamebow_pngSize = 8974;

    extern const char*   freedom_png;
    const int            freedom_pngSize = 7248;

    extern const char*   froth_png;
    const int            froth_pngSize = 8225;

    extern const char*   jammin_png;
    const int            jammin_pngSize = 14066;

    extern const char*   lantern_png;
    const int            lantern_pngSize = 5588;

    extern const char*   liquid_sugar_png;
    const int            liquid_sugar_pngSize = 9527;

    extern const char*   love_png;
    const int            love_pngSize = 8309;

    extern const char*   microdots_png;
    const int            microdots_pngSize = 8376;

    extern const char*   petals_png;
    const int            petals_pngSize = 8160;

    extern const char*   pulse_png;
    const int            pulse_pngSize = 7569;

    extern const char*   rainbow_png;
    const int            rainbow_pngSize = 14112;

    extern const char*   rainbow_dash_png;
    const int            rainbow_dash_pngSize = 13630;

    extern const char*   rainbow_drops_png;
    const int            rainbow_drops_pngSize = 24623;

    extern const char*   solar_flare_png;
    const int            solar_flare_pngSize = 5067;

    extern const char*   spirit_png;
    const int            spirit_pngSize = 7142;

    extern const char*   strobe_png;
    const int            strobe_pngSize = 6043;

    extern const char*   sunset_png;
    const int            sunset_pngSize = 5845;

    extern const char*   unicorns_png;
    const int            unicorns_pngSize = 11711;

    extern const char*   water_png;
    const int            water_pngSize = 13911;

    extern const char*   watermelon_png;
    const int            watermelon_pngSize = 6313;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 30;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}
