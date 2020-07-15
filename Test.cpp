/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    // check_throw(find(text, "HAaaaaaaaI"));
        CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of p and b and and replacement of lower-case and upper-case") {
    string text = "xxx happy yyy";
    CHECK(find(text, "haPby") == string("happy"));
    CHECK(find(text, "habPY") == string("happy"));
    CHECK(find(text, "hapBy") == string("happy"));
    CHECK(find(text, "haBBy") == string("happy"));
    CHECK(find(text, "HaPBY") == string("happy"));
    CHECK(find(text, "HabpY") == string("happy"));
    CHECK(find(text, "habbY") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of k and c and q and and replacement of lower-case and upper-case") {
    string text = "LukE I am yOUR faTher";
    CHECK(find(text, "luQe") == string("LukE"));
    CHECK(find(text, "Luce") == string("LukE"));
    CHECK(find(text, "lucE") == string("LukE"));
    CHECK(find(text, "LuqE") == string("LukE"));
    CHECK(find(text, "Luce") == string("LukE"));
    CHECK(find(text, "luce") == string("LukE"));
    CHECK(find(text, "LUKE") == string("LukE"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of v and w and replacement of lower-case and upper-case") {
    string text = "with great power comes great responsbility";
    CHECK(find(text, "vith") == string("with"));
    CHECK(find(text, "vitH") == string("with"));
    CHECK(find(text, "With") == string("with"));
    CHECK(find(text, "pover") == string("power"));
    CHECK(find(text, "PoVeR") == string("power"));
    CHECK(find(text, "POWER") == string("power"));
    CHECK(find(text, "VITH") == string("with"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of g and j and replacement of lower-case and upper-case") {
    string text = "i have just fonud a solution for a problem i had in GeeksforGeeks website";
    CHECK(find(text, "gust") == string("just"));
    CHECK(find(text, "Gust") == string("just"));
    CHECK(find(text, "JUST") == string("just"));
    CHECK(find(text, "Geeksforjeeks") == string("GeeksforGeeks"));
    CHECK(find(text, "GeeksforJeeks") == string("GeeksforGeeks"));
    CHECK(find(text, "GeeksforJEEKS") == string("GeeksforGeeks"));
    CHECK(find(text, "geeksforjeeks") == string("GeeksforGeeks"));
    CHECK(find(text, "jeeksforjeeks") == string("GeeksforGeeks"));
    CHECK(find(text, "geeksforJeeks") == string("GeeksforGeeks"));
    CHECK(find(text, "GEEksforgEEKS") == string("GeeksforGeeks"));
    CHECK(find(text, "Jeeksforgeeks") == string("GeeksforGeeks"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of s and z and replacement of lower-case and upper-case") {
    string text = "Zombie movies are the best";
    CHECK(find(text, "zombie") == string("Zombie"));
    CHECK(find(text, "sombie") == string("Zombie"));
    CHECK(find(text, "SOMBie") == string("Zombie"));
    CHECK(find(text, "bezt") == string("best"));
    CHECK(find(text, "BeZt") == string("best"));
    CHECK(find(text, "BEZT") == string("best"));
    CHECK(find(text, "bEZt") == string("best"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of d and t and replacement of lower-case and upper-case") {
    string text = "london bridge is falling down";
    CHECK(find(text, "Down") == string("down"));
    CHECK(find(text, "town") == string("down"));
    CHECK(find(text, "Town") == string("down"));
    CHECK(find(text, "DOWN") == string("down"));
    CHECK(find(text, "towN") == string("down"));
    CHECK(find(text, "ToWn") == string("down"));
    CHECK(find(text, "dOWn") == string("down"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of o and u and replacement of lower-case and upper-case") {
    string text = "london bridge is falling down";
    CHECK(find(text, "Duwn") == string("down"));
    CHECK(find(text, "duwn") == string("down"));
    CHECK(find(text, "DuWn") == string("down"));
    CHECK(find(text, "duWN") == string("down"));
    CHECK(find(text, "dUwN") == string("down"));
    CHECK(find(text, "dUWn") == string("down"));
    CHECK(find(text, "DUWN") == string("down"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of i and y and replacement of lower-case and upper-case") {
    string text = "london bridge is falling down";
    CHECK(find(text, "brydge") == string("bridge"));
    CHECK(find(text, "brIdge") == string("bridge"));
    CHECK(find(text, "brYdge") == string("bridge"));
    CHECK(find(text, "BRYDGE") == string("bridge"));
    CHECK(find(text, "fallyng") == string("falling"));
    CHECK(find(text, "FallYng") == string("falling"));
    CHECK(find(text, "fallYNG") == string("falling"));
    /* Add more checks here */
}


TEST_CASE("Test replacement more than one letter in a word") {
    string text = "london bridge is falling down";
    CHECK(find(text, "frydge") == string("bridge"));
    CHECK(find(text, "FRYdje") == string("bridge"));
    CHECK(find(text, "Bridge") == string("bridge"));
    CHECK(find(text, "fridje") == string("bridge"));
    CHECK(find(text, "fridJE") == string("bridge"));
    CHECK(find(text, "FrYdge") == string("bridge"));
    CHECK(find(text, "FrIdge") == string("bridge"));
    CHECK(find(text, "prYdje") == string("bridge"));
    CHECK(find(text, "PRYDJE") == string("bridge"));
    CHECK(find(text, "fallinj") == string("falling"));
    CHECK(find(text, "FallYnG") == string("falling"));
    CHECK(find(text, "fallynj") == string("falling"));
    /* Add more checks here */
}

TEST_CASE("test if the program throws an exeption for words that are not in the text") {
    string text = "london bridge is falling down";
    CHECK_THROWS(find(text, "aridge"));
    CHECK_THROWS(find(text, "bridg"));
    CHECK_THROWS(find(text, "bridgee"));
    CHECK_THROWS(find(text, "izz"));
    CHECK_THROWS(find(text, "i"));
    CHECK_THROWS(find(text, "fall"));
    CHECK_THROWS(find(text, "fallimg"));
    CHECK_THROWS(find(text, "bridgh"));
    CHECK_THROWS(find(text, "dowe"));
    CHECK_THROWS(find(text, "dow"));
    CHECK_THROWS(find(text, "dwn"));
    CHECK_THROWS(find(text, "downe"));
    CHECK_THROWS(find(text, "own"));
    CHECK_THROWS(find(text, "sondon"));
    CHECK_THROWS(find(text, "tondon"));
    CHECK_THROWS(find(text, "londom"));
    CHECK_THROWS(find(text, "his"));
    CHECK_THROWS(find(text, "bcidge"));
    CHECK_THROWS(find(text, "down!"));
    CHECK_THROWS(find(text, "fakking"));
    CHECK_THROWS(find(text, "falking"));
    CHECK_THROWS(find(text, "falking"));
    CHECK_THROWS(find(text, "lozdon"));
    /* Add more checks here */

    
}

TEST_CASE("Test replacement of v,w and t,d and o,u") {
    string text = "we have to do 100 tests and we must not go more than 100 meters from the house";
    CHECK(find(text, "we") == string("we"));
    CHECK(find(text, "ve") == string("we"));
    CHECK(find(text, "have") == string("have"));
    CHECK(find(text, "hawe") == string("have"));
    CHECK(find(text, "to") == string("to"));
    CHECK(find(text, "tu") == string("to"));
    CHECK(find(text, "do") == string("to"));
    CHECK(find(text, "du") == string("to"));
    CHECK(find(text, "tests") == string("tests"));
    CHECK(find(text, "desds") == string("tests"));
    CHECK(find(text, "dests") == string("tests"));
    CHECK(find(text, "tesds") == string("tests"));
    CHECK(find(text, "and") == string("and"));
    CHECK(find(text, "ant") == string("and"));
    CHECK(find(text, "must") == string("must"));
    CHECK(find(text, "most") == string("must"));
    CHECK(find(text, "musd") == string("must"));
    CHECK(find(text, "mosd") == string("must"));
    CHECK(find(text, "frum") == string("from"));
//20
}

TEST_CASE("Test replacement of lower-case and upper-case and c,k,q") {
    string text = "ICQ is the best cakaqa ever";
    CHECK(find(text, "ICQ") == string("ICQ"));
    CHECK(find(text, "icq") == string("ICQ"));
    CHECK(find(text, "Icq") == string("ICQ"));
    CHECK(find(text, "IcQ") == string("ICQ"));
    CHECK(find(text, "ICq") == string("ICQ"));
    CHECK(find(text, "iCQ") == string("ICQ"));
    CHECK(find(text, "icQ") == string("ICQ"));
    CHECK(find(text, "ICC") == string("ICQ"));
    CHECK(find(text, "icc") == string("ICQ"));
    CHECK(find(text, "iCc") == string("ICQ"));
    CHECK(find(text, "IcC") == string("ICQ"));
    CHECK(find(text, "ICc") == string("ICQ"));
    CHECK(find(text, "ikc") == string("ICQ"));
    CHECK(find(text, "IKC") == string("ICQ"));
    CHECK(find(text, "iKc") == string("ICQ"));
    CHECK(find(text, "Ick") == string("ICQ"));
    CHECK(find(text, "iCK") == string("ICQ"));
    CHECK(find(text, "iqq") == string("ICQ"));
    CHECK(find(text, "iqc") == string("ICQ"));
    CHECK(find(text, "ikq") == string("ICQ"));
    CHECK(find(text, "ikk") == string("ICQ"));
    CHECK(find(text, "iqk") == string("ICQ"));
    CHECK(find(text, "ikc") == string("ICQ"));
    CHECK(find(text, "ick") == string("ICQ"));
    CHECK(find(text, "IqK") == string("ICQ"));
//26   
}

TEST_CASE("Test replacement of lower-case and upper-case and b,p") {
    string text = "Bibi and Binyamin Ganz play together";
    CHECK(find(text, "bibI") == string("Bibi"));
    CHECK(find(text, "BiBi") == string("Bibi"));
    CHECK(find(text, "Bibi") == string("Bibi"));
    CHECK(find(text, "biBi") == string("Bibi"));
    CHECK(find(text, "pibi") == string("Bibi"));
    CHECK(find(text, "bipi") == string("Bibi"));
    CHECK(find(text, "pipi") == string("Bibi"));
    CHECK(find(text, "PIPI") == string("Bibi"));
    CHECK(find(text, "bIpI") == string("Bibi"));
    CHECK(find(text, "pIBi") == string("Bibi"));
    CHECK(find(text, "PIBi") == string("Bibi"));
    CHECK(find(text, "PiBi") == string("Bibi"));
    CHECK(find(text, "Binyamin") == string("Binyamin"));
    CHECK(find(text, "binyamin") == string("Binyamin"));
    CHECK(find(text, "pinyamin") == string("Binyamin"));
    CHECK(find(text, "Pinyamin") == string("Binyamin"));
    CHECK(find(text, "pINyamin") == string("Binyamin"));
    CHECK(find(text, "play") == string("play"));
    CHECK(find(text, "blay") == string("play"));
    CHECK(find(text, "Play") == string("play"));
    CHECK(find(text, "Blay") == string("play"));
    //22
}

TEST_CASE("Test replacement of lower-case and upper-case and g,j") {
    string text = "Google play jungle speed";
    CHECK(find(text, "Google") == string("Google"));
    CHECK(find(text, "google") == string("Google"));
    CHECK(find(text, "GooGle") == string("Google"));
    CHECK(find(text, "gooGle") == string("Google"));
    CHECK(find(text, "Goojle") == string("Google"));
    CHECK(find(text, "gooJle") == string("Google"));
    CHECK(find(text, "joogle") == string("Google"));
    CHECK(find(text, "jooGle") == string("Google"));
    CHECK(find(text, "Joogle") == string("Google"));
    CHECK(find(text, "joojle") == string("Google"));
    CHECK(find(text, "JooJle") == string("Google"));
    CHECK(find(text, "JOOJLE") == string("Google"));
    CHECK(find(text, "jungle") == string("jungle"));
    CHECK(find(text, "gungle") == string("jungle"));
    CHECK(find(text, "junjle") == string("jungle"));
    CHECK(find(text, "gunjle") == string("jungle"));
    CHECK(find(text, "Jungle") == string("jungle"));
    CHECK(find(text, "JunGle") == string("jungle"));
    CHECK(find(text, "Gunjle") == string("jungle"));
    CHECK(find(text, "GunJle") == string("jungle"));
    CHECK(find(text, "JUNGLE") == string("jungle"));
    CHECK(find(text, "GUNJLE") == string("jungle"));
    CHECK(find(text, "GUnJLe") == string("jungle"));
    CHECK(find(text, "JuNgLe") == string("jungle"));

}






