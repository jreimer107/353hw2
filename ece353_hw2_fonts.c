#include "ece353_hw2_fonts.h"
#include "../peripherals/include/lcd.h"
/// Hmmmm?  Do I need an include here of ///
/// lcd.h to access stuff in lcd.c ?  ////

//
//  Font data for Courier New 13pt
//

// Character bitmaps for Courier New 13pt
const uint8_t courierNewBitmap[] =
{

	// @204 ' ' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @0 '!' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1C, 0x00, //    ###
	0x1C, 0x00, //    ###
	0x00, 0x00, //
	0x08, 0x00, //     #
	0x1C, 0x00, //    ###
	0x1C, 0x00, //    ###
	0x1C, 0x00, //    ###
	0x1C, 0x00, //    ###
	0x1C, 0x00, //    ###
	0x1C, 0x00, //    ###
	0x1C, 0x00, //    ###
	0x00, 0x00, //

	// @34 '"' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x22, 0x00, //   #   #
	0x22, 0x00, //   #   #
	0x22, 0x00, //   #   #
	0x77, 0x00, //  ### ###
	0x77, 0x00, //  ### ###
	0x00, 0x00, //
	0x00, 0x00, //

	// @68 '#' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x1B, 0x00, //    ## ##
	0x1B, 0x00, //    ## ##
	0x1B, 0x00, //    ## ##
	0x1B, 0x00, //    ## ##
	0x7F, 0x80, //  ########
	0x7F, 0x80, //  ########
	0x1B, 0x00, //    ## ##
	0x36, 0x00, //   ## ##
	0x7F, 0x80, //  ########
	0x7F, 0x80, //  ########
	0x36, 0x00, //   ## ##
	0x36, 0x00, //   ## ##
	0x36, 0x00, //   ## ##
	0x36, 0x00, //   ## ##

	// @102 '$' (11 pixels wide)
	0x00, 0x00, //
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x1F, 0x00, //    #####
	0x3F, 0x00, //   ######
	0x33, 0x00, //   ##  ##
	0x30, 0x00, //   ##
	0x3C, 0x00, //   ####
	0x1F, 0x00, //    #####
	0x03, 0x00, //       ##
	0x33, 0x00, //   ##  ##
	0x3F, 0x00, //   ######
	0x3E, 0x00, //   #####
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##

	// @136 '%' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1C, 0x00, //    ###
	0x22, 0x00, //   #   #
	0x22, 0x00, //   #   #
	0x22, 0x00, //   #   #
	0x1D, 0x80, //    ### ##
	0x0E, 0x00, //     ###
	0x37, 0x00, //   ## ###
	0x08, 0x80, //     #   #
	0x08, 0x80, //     #   #
	0x08, 0x80, //     #   #
	0x07, 0x00, //      ###
	0x00, 0x00, //

	// @170 '&' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x4F, 0x00, //  #  ####
	0x7F, 0xC0, //  #########
	0x38, 0xC0, //   ###   ##
	0x7C, 0xC0, //  #####  ##
	0x67, 0x80, //  ##  ####
	0x03, 0x00, //       ##
	0x01, 0x80, //        ##
	0x3F, 0x80, //   #######
	0x3E, 0x00, //   #####
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @204 ''' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x08, 0x00, //     #
	0x08, 0x00, //     #
	0x08, 0x00, //     #
	0x1C, 0x00, //    ###
	0x1C, 0x00, //    ###
	0x00, 0x00, //
	0x00, 0x00, //

	// @238 '(' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x30, 0x00, //   ##
	0x30, 0x00, //   ##
	0x18, 0x00, //    ##
	0x18, 0x00, //    ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x18, 0x00, //    ##
	0x18, 0x00, //    ##
	0x30, 0x00, //   ##
	0x30, 0x00, //   ##
	0x00, 0x00, //

	// @272 ')' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x01, 0x80, //        ##
	0x01, 0x80, //        ##
	0x03, 0x00, //       ##
	0x03, 0x00, //       ##
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x03, 0x00, //       ##
	0x03, 0x00, //       ##
	0x01, 0x80, //        ##
	0x01, 0x80, //        ##
	0x00, 0x00, //

	// @306 '*' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x33, 0x00, //   ##  ##
	0x3F, 0x00, //   ######
	0x1E, 0x00, //    ####
	0x7F, 0x80, //  ########
	0x7F, 0x80, //  ########
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x00, 0x00, //

	// @340 '+' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0xFF, 0xC0, // ##########
	0xFF, 0xC0, // ##########
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x00, 0x00, //
	0x00, 0x00, //

	// @374 ',' (11 pixels wide)
	0x00, 0x00, //
	0x02, 0x00, //       #
	0x02, 0x00, //       #
	0x06, 0x00, //      ##
	0x04, 0x00, //      #
	0x0C, 0x00, //     ##
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @408 '-' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x7F, 0x00, //  #######
	0x7F, 0x00, //  #######
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @442 '.' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1C, 0x00, //    ###
	0x1C, 0x00, //    ###
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @476 '/' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x01, 0x80, //        ##
	0x01, 0x80, //        ##
	0x03, 0x00, //       ##
	0x03, 0x00, //       ##
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x18, 0x00, //    ##
	0x18, 0x00, //    ##
	0x30, 0x00, //   ##
	0x30, 0x00, //   ##
	0x60, 0x00, //  ##
	0x60, 0x00, //  ##

	// @510 '0' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x0E, 0x00, //     ###
	0x1F, 0x00, //    #####
	0x3B, 0x80, //   ### ###
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x3B, 0x80, //   ### ###
	0x1F, 0x00, //    #####
	0x0E, 0x00, //     ###
	0x00, 0x00, //

	// @544 '1' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x7F, 0x80, //  ########
	0x7F, 0x80, //  ########
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0F, 0x80, //     #####
	0x0F, 0x80, //     #####
	0x0C, 0x00, //     ##
	0x00, 0x00, //

	// @578 '2' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x3F, 0x80, //   #######
	0x3F, 0x80, //   #######
	0x03, 0x00, //       ##
	0x06, 0x00, //      ##
	0x0C, 0x00, //     ##
	0x18, 0x00, //    ##
	0x30, 0x00, //   ##
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x1F, 0x00, //    #####
	0x0E, 0x00, //     ###
	0x00, 0x00, //

	// @612 '3' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x0F, 0x80, //     #####
	0x1F, 0xC0, //    #######
	0x30, 0xC0, //   ##    ##
	0x30, 0x00, //   ##
	0x38, 0x00, //   ###
	0x1E, 0x00, //    ####
	0x1E, 0x00, //    ####
	0x30, 0x00, //   ##
	0x31, 0x80, //   ##   ##
	0x3F, 0x80, //   #######
	0x1F, 0x00, //    #####
	0x00, 0x00, //

	// @646 '4' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x3E, 0x00, //   #####
	0x3E, 0x00, //   #####
	0x18, 0x00, //    ##
	0x3F, 0xC0, //   ########
	0x3F, 0xC0, //   ########
	0x19, 0x80, //    ##  ##
	0x1B, 0x80, //    ## ###
	0x1B, 0x00, //    ## ##
	0x1E, 0x00, //    ####
	0x1E, 0x00, //    ####
	0x1C, 0x00, //    ###
	0x00, 0x00, //

	// @680 '5' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x0F, 0x80, //     #####
	0x1F, 0xC0, //    #######
	0x30, 0xC0, //   ##    ##
	0x30, 0x00, //   ##
	0x30, 0x00, //   ##
	0x1F, 0x80, //    ######
	0x0F, 0x80, //     #####
	0x01, 0x80, //        ##
	0x01, 0x80, //        ##
	0x1F, 0x80, //    ######
	0x1F, 0x80, //    ######
	0x00, 0x00, //

	// @714 '6' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1E, 0x00, //    ####
	0x3F, 0x00, //   ######
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x33, 0x80, //   ##  ###
	0x3F, 0x80, //   #######
	0x1D, 0x80, //    ### ##
	0x03, 0x80, //       ###
	0x07, 0x00, //      ###
	0x3E, 0x00, //   #####
	0x3C, 0x00, //   ####
	0x00, 0x00, //

	// @748 '7' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x18, 0x00, //    ##
	0x18, 0x00, //    ##
	0x18, 0x00, //    ##
	0x18, 0x00, //    ##
	0x30, 0x00, //   ##
	0x31, 0x80, //   ##   ##
	0x3F, 0x80, //   #######
	0x3F, 0x80, //   #######
	0x00, 0x00, //

	// @782 '8' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1F, 0x00, //    #####
	0x3F, 0x80, //   #######
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x1F, 0x00, //    #####
	0x1F, 0x00, //    #####
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x3F, 0x80, //   #######
	0x1F, 0x00, //    #####
	0x00, 0x00, //

	// @816 '9' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x07, 0x80, //      ####
	0x0F, 0x80, //     #####
	0x1C, 0x00, //    ###
	0x38, 0x00, //   ###
	0x37, 0x00, //   ## ###
	0x3F, 0x80, //   #######
	0x39, 0x80, //   ###  ##
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x1F, 0x80, //    ######
	0x0F, 0x00, //     ####
	0x00, 0x00, //

	// @850 ':' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1C, 0x00, //    ###
	0x1C, 0x00, //    ###
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1C, 0x00, //    ###
	0x1C, 0x00, //    ###
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @884 ';' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x02, 0x00, //       #
	0x02, 0x00, //       #
	0x04, 0x00, //      #
	0x0C, 0x00, //     ##
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1C, 0x00, //    ###
	0x1C, 0x00, //    ###
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @918 '<' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x60, 0x00, //  ##
	0x78, 0x00, //  ####
	0x1C, 0x00, //    ###
	0x07, 0x00, //      ###
	0x03, 0xC0, //       ####
	0x07, 0x00, //      ###
	0x1C, 0x00, //    ###
	0x78, 0x00, //  ####
	0x60, 0x00, //  ##
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @952 '=' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x7F, 0xC0, //  #########
	0x7F, 0xC0, //  #########
	0x00, 0x00, //
	0x7F, 0xC0, //  #########
	0x7F, 0xC0, //  #########
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @986 '>' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0xC0, //         ##
	0x03, 0xC0, //       ####
	0x07, 0x00, //      ###
	0x1C, 0x00, //    ###
	0x78, 0x00, //  ####
	0x1C, 0x00, //    ###
	0x07, 0x00, //      ###
	0x03, 0xC0, //       ####
	0x00, 0xC0, //         ##
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @1020 '?' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x00, 0x00, //
	0x06, 0x00, //      ##
	0x1E, 0x00, //    ####
	0x38, 0x00, //   ###
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x3F, 0x80, //   #######
	0x1F, 0x00, //    #####
	0x00, 0x00, //
	0x00, 0x00, //

	// @1054 '@' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x0E, 0x00, //     ###
	0x11, 0x00, //    #   #
	0x00, 0x80, //         #
	0x00, 0x80, //         #
	0x1C, 0x80, //    ###  #
	0x12, 0x80, //    #  # #
	0x12, 0x80, //    #  # #
	0x12, 0x80, //    #  # #
	0x1C, 0x80, //    ###  #
	0x10, 0x80, //    #    #
	0x11, 0x00, //    #   #
	0x0E, 0x00, //     ###
	0x00, 0x00, //

	// @1088 'A' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0xF3, 0xC0, // ####  ####
	0xF3, 0xC0, // ####  ####
	0x61, 0x80, //  ##    ##
	0x3F, 0x00, //   ######
	0x3F, 0x00, //   ######
	0x33, 0x00, //   ##  ##
	0x12, 0x00, //    #  #
	0x1E, 0x00, //    ####
	0x1F, 0x80, //    ######
	0x0F, 0x80, //     #####
	0x00, 0x00, //
	0x00, 0x00, //

	// @1122 'B' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x3F, 0xC0, //   ########
	0x7F, 0xC0, //  #########
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x3F, 0x80, //   #######
	0x1F, 0x80, //    ######
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x3F, 0xC0, //   ########
	0x1F, 0xC0, //    #######
	0x00, 0x00, //
	0x00, 0x00, //

	// @1156 'C' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1E, 0x00, //    ####
	0x7F, 0x80, //  ########
	0x61, 0xC0, //  ##    ###
	0x00, 0xC0, //         ##
	0x00, 0xC0, //         ##
	0x00, 0xC0, //         ##
	0x60, 0xC0, //  ##     ##
	0x61, 0xC0, //  ##    ###
	0x7F, 0x80, //  ########
	0x6F, 0x00, //  ## ####
	0x00, 0x00, //
	0x00, 0x00, //

	// @1190 'D' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1F, 0xC0, //    #######
	0x3F, 0xC0, //   ########
	0x71, 0x80, //  ###   ##
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x71, 0x80, //  ###   ##
	0x3F, 0xC0, //   ########
	0x1F, 0xC0, //    #######
	0x00, 0x00, //
	0x00, 0x00, //

	// @1224 'E' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x7F, 0xC0, //  #########
	0x7F, 0xC0, //  #########
	0x61, 0x80, //  ##    ##
	0x6D, 0x80, //  ## ## ##
	0x0F, 0x80, //     #####
	0x0F, 0x80, //     #####
	0x6D, 0x80, //  ## ## ##
	0x61, 0x80, //  ##    ##
	0x7F, 0xC0, //  #########
	0x7F, 0xC0, //  #########
	0x00, 0x00, //
	0x00, 0x00, //

	// @1258 'F' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x0F, 0xC0, //     ######
	0x0F, 0xC0, //     ######
	0x01, 0x80, //        ##
	0x0D, 0x80, //     ## ##
	0x0F, 0x80, //     #####
	0x0F, 0x80, //     #####
	0x6D, 0x80, //  ## ## ##
	0x61, 0x80, //  ##    ##
	0x7F, 0xC0, //  #########
	0x7F, 0xC0, //  #########
	0x00, 0x00, //
	0x00, 0x00, //

	// @1292 'G' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1F, 0x00, //    #####
	0x3F, 0x80, //   #######
	0x31, 0xC0, //   ##   ###
	0x7C, 0xC0, //  #####  ##
	0x7C, 0xC0, //  #####  ##
	0x00, 0xC0, //         ##
	0x00, 0xC0, //         ##
	0x31, 0xC0, //   ##   ###
	0x3F, 0x80, //   #######
	0x37, 0x00, //   ## ###
	0x00, 0x00, //
	0x00, 0x00, //

	// @1326 'H' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x7B, 0xC0, //  #### ####
	0x7B, 0xC0, //  #### ####
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x3F, 0x80, //   #######
	0x3F, 0x80, //   #######
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x7B, 0xC0, //  #### ####
	0x7B, 0xC0, //  #### ####
	0x00, 0x00, //
	0x00, 0x00, //

	// @1360 'I' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x7F, 0x80, //  ########
	0x7F, 0x80, //  ########
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x7F, 0x80, //  ########
	0x7F, 0x80, //  ########
	0x00, 0x00, //
	0x00, 0x00, //

	// @1394 'J' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x0E, 0x00, //     ###
	0x3F, 0x80, //   #######
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x30, 0x00, //   ##
	0x30, 0x00, //   ##
	0x30, 0x00, //   ##
	0xFE, 0x00, // #######
	0xFE, 0x00, // #######
	0x00, 0x00, //
	0x00, 0x00, //

	// @1428 'K' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x73, 0xC0, //  ###  ####
	0x73, 0xC0, //  ###  ####
	0x19, 0x80, //    ##  ##
	0x19, 0x80, //    ##  ##
	0x0F, 0x80, //     #####
	0x07, 0x80, //      ####
	0x0D, 0x80, //     ## ##
	0x19, 0x80, //    ##  ##
	0x7B, 0xC0, //  #### ####
	0x7B, 0xC0, //  #### ####
	0x00, 0x00, //
	0x00, 0x00, //

	// @1462 'L' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x7F, 0xC0, //  #########
	0x7F, 0xC0, //  #########
	0x63, 0x00, //  ##   ##
	0x63, 0x00, //  ##   ##
	0x63, 0x00, //  ##   ##
	0x03, 0x00, //       ##
	0x03, 0x00, //       ##
	0x03, 0x00, //       ##
	0x0F, 0xC0, //     ######
	0x0F, 0xC0, //     ######
	0x00, 0x00, //
	0x00, 0x00, //

	// @1496 'M' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0xFB, 0xE0, // ##### #####
	0xFB, 0xE0, // ##### #####
	0x60, 0xC0, //  ##     ##
	0x64, 0xC0, //  ##  #  ##
	0x6E, 0xC0, //  ## ### ##
	0x6A, 0xC0, //  ## # # ##
	0x6A, 0xC0, //  ## # # ##
	0x7B, 0xC0, //  #### ####
	0xF1, 0xE0, // ####   ####
	0xF1, 0xE0, // ####   ####
	0x00, 0x00, //
	0x00, 0x00, //

	// @1530 'N' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x3B, 0xC0, //   ### ####
	0x3B, 0xC0, //   ### ####
	0x39, 0x80, //   ###  ##
	0x3D, 0x80, //   #### ##
	0x3D, 0x80, //   #### ##
	0x37, 0x80, //   ## ####
	0x37, 0x80, //   ## ####
	0x37, 0x80, //   ## ####
	0x7B, 0xC0, //  #### ####
	0x7B, 0xC0, //  #### ####
	0x00, 0x00, //
	0x00, 0x00, //

	// @1564 'O' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x0E, 0x00, //     ###
	0x3F, 0x80, //   #######
	0x31, 0x80, //   ##   ##
	0x60, 0xC0, //  ##     ##
	0x60, 0xC0, //  ##     ##
	0x60, 0xC0, //  ##     ##
	0x60, 0xC0, //  ##     ##
	0x31, 0x80, //   ##   ##
	0x3F, 0x80, //   #######
	0x0E, 0x00, //     ###
	0x00, 0x00, //
	0x00, 0x00, //

	// @1598 'P' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x0F, 0xC0, //     ######
	0x0F, 0xC0, //     ######
	0x01, 0x80, //        ##
	0x01, 0x80, //        ##
	0x1F, 0x80, //    ######
	0x3F, 0x80, //   #######
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x3F, 0xC0, //   ########
	0x1F, 0xC0, //    #######
	0x00, 0x00, //
	0x00, 0x00, //

	// @1632 'Q' (11 pixels wide)
	0x00, 0x00, //
	0x33, 0x00, //   ##  ##
	0x7F, 0x00, //  #######
	0x6E, 0x00, //  ## ###
	0x0E, 0x00, //     ###
	0x3F, 0x80, //   #######
	0x31, 0x80, //   ##   ##
	0x60, 0xC0, //  ##     ##
	0x60, 0xC0, //  ##     ##
	0x60, 0xC0, //  ##     ##
	0x60, 0xC0, //  ##     ##
	0x31, 0x80, //   ##   ##
	0x3F, 0x80, //   #######
	0x0E, 0x00, //     ###
	0x00, 0x00, //
	0x00, 0x00, //

	// @1666 'R' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x67, 0xC0, //  ##  #####
	0x77, 0xC0, //  ### #####
	0x39, 0x80, //   ###  ##
	0x1D, 0x80, //    ### ##
	0x0F, 0x80, //     #####
	0x1F, 0x80, //    ######
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x3F, 0xC0, //   ########
	0x1F, 0xC0, //    #######
	0x00, 0x00, //
	0x00, 0x00, //

	// @1700 'S' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1D, 0x80, //    ### ##
	0x3F, 0x80, //   #######
	0x31, 0x80, //   ##   ##
	0x30, 0x00, //   ##
	0x1E, 0x00, //    ####
	0x0F, 0x00, //     ####
	0x01, 0x80, //        ##
	0x31, 0x80, //   ##   ##
	0x3F, 0x80, //   #######
	0x37, 0x00, //   ## ###
	0x00, 0x00, //
	0x00, 0x00, //

	// @1734 'T' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x3F, 0x00, //   ######
	0x3F, 0x00, //   ######
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0xCC, 0xC0, // ##  ##  ##
	0xCC, 0xC0, // ##  ##  ##
	0xCC, 0xC0, // ##  ##  ##
	0xFF, 0xC0, // ##########
	0xFF, 0xC0, // ##########
	0x00, 0x00, //
	0x00, 0x00, //

	// @1768 'U' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x0E, 0x00, //     ###
	0x1F, 0x00, //    #####
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x7B, 0xC0, //  #### ####
	0x7B, 0xC0, //  #### ####
	0x00, 0x00, //
	0x00, 0x00, //

	// @1802 'V' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x0E, 0x00, //     ###
	0x0E, 0x00, //     ###
	0x0A, 0x00, //     # #
	0x1B, 0x00, //    ## ##
	0x1B, 0x00, //    ## ##
	0x1B, 0x00, //    ## ##
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x7B, 0xC0, //  #### ####
	0x7B, 0xC0, //  #### ####
	0x00, 0x00, //
	0x00, 0x00, //

	// @1836 'W' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x3B, 0x80, //   ### ###
	0x3B, 0x80, //   ### ###
	0x3B, 0x80, //   ### ###
	0x2A, 0x80, //   # # # #
	0x6E, 0xC0, //  ## ### ##
	0x6E, 0xC0, //  ## ### ##
	0x6E, 0xC0, //  ## ### ##
	0x60, 0xC0, //  ##     ##
	0xFB, 0xE0, // ##### #####
	0xFB, 0xE0, // ##### #####
	0x00, 0x00, //
	0x00, 0x00, //

	// @1870 'X' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x7B, 0xC0, //  #### ####
	0x7B, 0xC0, //  #### ####
	0x31, 0x80, //   ##   ##
	0x1B, 0x00, //    ## ##
	0x0E, 0x00, //     ###
	0x0E, 0x00, //     ###
	0x1B, 0x00, //    ## ##
	0x31, 0x80, //   ##   ##
	0x7B, 0xC0, //  #### ####
	0x7B, 0xC0, //  #### ####
	0x00, 0x00, //
	0x00, 0x00, //

	// @1904 'Y' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x3F, 0x00, //   ######
	0x3F, 0x00, //   ######
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x1E, 0x00, //    ####
	0x33, 0x00, //   ##  ##
	0x61, 0x80, //  ##    ##
	0xF3, 0xC0, // ####  ####
	0xF3, 0xC0, // ####  ####
	0x00, 0x00, //
	0x00, 0x00, //

	// @1938 'Z' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x3F, 0x80, //   #######
	0x3F, 0x80, //   #######
	0x31, 0x80, //   ##   ##
	0x33, 0x00, //   ##  ##
	0x06, 0x00, //      ##
	0x0C, 0x00, //     ##
	0x19, 0x80, //    ##  ##
	0x31, 0x80, //   ##   ##
	0x3F, 0x80, //   #######
	0x3F, 0x80, //   #######
	0x00, 0x00, //
	0x00, 0x00, //

	// @1972 '[' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x3C, 0x00, //   ####
	0x3C, 0x00, //   ####
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x3C, 0x00, //   ####
	0x3C, 0x00, //   ####
	0x00, 0x00, //

	// @2006 '\' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x60, 0x00, //  ##
	0x60, 0x00, //  ##
	0x30, 0x00, //   ##
	0x30, 0x00, //   ##
	0x18, 0x00, //    ##
	0x18, 0x00, //    ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x03, 0x00, //       ##
	0x03, 0x00, //       ##
	0x01, 0x80, //        ##
	0x01, 0x80, //        ##

	// @2040 ']' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x0F, 0x00, //     ####
	0x0F, 0x00, //     ####
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0F, 0x00, //     ####
	0x0F, 0x00, //     ####
	0x00, 0x00, //

	// @2074 '^' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x63, 0x00, //  ##   ##
	0x63, 0x00, //  ##   ##
	0x36, 0x00, //   ## ##
	0x1C, 0x00, //    ###
	0x08, 0x00, //     #
	0x00, 0x00, //

	// @2108 '_' (11 pixels wide)
	0xFF, 0xE0, // ###########
	0xFF, 0xE0, // ###########
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2142 '`' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x08, 0x00, //     #
	0x04, 0x00, //      #
	0x02, 0x00, //       #

	// @2176 'a' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x77, 0x00, //  ### ###
	0x7F, 0x80, //  ########
	0x31, 0x80, //   ##   ##
	0x3F, 0x80, //   #######
	0x3F, 0x00, //   ######
	0x30, 0x00, //   ##
	0x3F, 0x00, //   ######
	0x1F, 0x00, //    #####
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2210 'b' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1D, 0xC0, //    ### ###
	0x3F, 0xC0, //   ########
	0x73, 0x80, //  ###  ###
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x73, 0x80, //  ###  ###
	0x3F, 0x80, //   #######
	0x1D, 0x80, //    ### ##
	0x01, 0x80, //        ##
	0x01, 0xC0, //        ###
	0x01, 0xC0, //        ###
	0x00, 0x00, //

	// @2244 'c' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x3E, 0x00, //   #####
	0x7F, 0x00, //  #######
	0x43, 0x80, //  #    ###
	0x01, 0x80, //        ##
	0x01, 0x80, //        ##
	0x63, 0x80, //  ##   ###
	0x7F, 0x00, //  #######
	0x5E, 0x00, //  # ####
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2278 'd' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0xEE, 0x00, // ### ###
	0xFF, 0x00, // ########
	0x73, 0x80, //  ###  ###
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x73, 0x80, //  ###  ###
	0x7F, 0x00, //  #######
	0x6E, 0x00, //  ## ###
	0x60, 0x00, //  ##
	0x70, 0x00, //  ###
	0x70, 0x00, //  ###
	0x00, 0x00, //

	// @2312 'e' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x3E, 0x00, //   #####
	0x7F, 0x00, //  #######
	0x01, 0x80, //        ##
	0x7F, 0x80, //  ########
	0x7F, 0x80, //  ########
	0x61, 0x80, //  ##    ##
	0x3F, 0x00, //   ######
	0x1E, 0x00, //    ####
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2346 'f' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x3F, 0x80, //   #######
	0x3F, 0x80, //   #######
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x7F, 0x80, //  ########
	0x7F, 0x80, //  ########
	0x06, 0x00, //      ##
	0x7E, 0x00, //  ######
	0x7C, 0x00, //  #####
	0x00, 0x00, //

	// @2380 'g' (11 pixels wide)
	0x00, 0x00, //
	0x3E, 0x00, //   #####
	0x7E, 0x00, //  ######
	0x60, 0x00, //  ##
	0x6E, 0x00, //  ## ###
	0x7F, 0x00, //  #######
	0x73, 0x80, //  ###  ###
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x73, 0x80, //  ###  ###
	0xFF, 0x00, // ########
	0xEE, 0x00, // ### ###
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2414 'h' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0xF3, 0xC0, // ####  ####
	0xF3, 0xC0, // ####  ####
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x63, 0x80, //  ##   ###
	0x7F, 0x80, //  ########
	0x3D, 0x80, //   #### ##
	0x01, 0x80, //        ##
	0x01, 0xC0, //        ###
	0x01, 0xC0, //        ###
	0x00, 0x00, //

	// @2448 'i' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x7F, 0x80, //  ########
	0x7F, 0x80, //  ########
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0F, 0x00, //     ####
	0x0F, 0x00, //     ####
	0x00, 0x00, //
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x00, 0x00, //

	// @2482 'j' (11 pixels wide)
	0x00, 0x00, //
	0x1F, 0x80, //    ######
	0x3F, 0x80, //   #######
	0x30, 0x00, //   ##
	0x30, 0x00, //   ##
	0x30, 0x00, //   ##
	0x30, 0x00, //   ##
	0x30, 0x00, //   ##
	0x30, 0x00, //   ##
	0x30, 0x00, //   ##
	0x3F, 0x80, //   #######
	0x3F, 0x80, //   #######
	0x00, 0x00, //
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x00, 0x00, //

	// @2516 'k' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x73, 0x80, //  ###  ###
	0x73, 0x80, //  ###  ###
	0x1B, 0x00, //    ## ##
	0x0F, 0x00, //     ####
	0x07, 0x00, //      ###
	0x0F, 0x00, //     ####
	0x7B, 0x00, //  #### ##
	0x7B, 0x00, //  #### ##
	0x03, 0x00, //       ##
	0x03, 0x80, //       ###
	0x03, 0x80, //       ###
	0x00, 0x00, //

	// @2550 'l' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x7F, 0x80, //  ########
	0x7F, 0x80, //  ########
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0F, 0x00, //     ####
	0x0F, 0x00, //     ####
	0x00, 0x00, //

	// @2584 'm' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0xED, 0xC0, // ### ## ###
	0xED, 0xC0, // ### ## ###
	0x6D, 0x80, //  ## ## ##
	0x6D, 0x80, //  ## ## ##
	0x6D, 0x80, //  ## ## ##
	0x6D, 0x80, //  ## ## ##
	0x7F, 0xC0, //  #########
	0x37, 0xC0, //   ## #####
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2618 'n' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0xF3, 0xC0, // ####  ####
	0xF3, 0xC0, // ####  ####
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x63, 0x80, //  ##   ###
	0x7F, 0xC0, //  #########
	0x3D, 0xC0, //   #### ###
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2652 'o' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1E, 0x00, //    ####
	0x3F, 0x00, //   ######
	0x73, 0x80, //  ###  ###
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x73, 0x80, //  ###  ###
	0x3F, 0x00, //   ######
	0x1E, 0x00, //    ####
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2686 'p' (11 pixels wide)
	0x00, 0x00, //
	0x07, 0xC0, //      #####
	0x07, 0xC0, //      #####
	0x01, 0x80, //        ##
	0x1D, 0x80, //    ### ##
	0x3F, 0x80, //   #######
	0x73, 0x80, //  ###  ###
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x73, 0x80, //  ###  ###
	0x3F, 0xC0, //   ########
	0x1D, 0xC0, //    ### ###
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2720 'q' (11 pixels wide)
	0x00, 0x00, //
	0xF8, 0x00, // #####
	0xF8, 0x00, // #####
	0x60, 0x00, //  ##
	0x6E, 0x00, //  ## ###
	0x7F, 0x00, //  #######
	0x73, 0x80, //  ###  ###
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x73, 0x80, //  ###  ###
	0xFF, 0x00, // ########
	0xEE, 0x00, // ### ###
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2754 'r' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x3F, 0x80, //   #######
	0x3F, 0x80, //   #######
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x0E, 0x00, //     ###
	0x7F, 0x80, //  ########
	0x77, 0x80, //  ### ####
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2788 's' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x1F, 0x80, //    ######
	0x3F, 0x80, //   #######
	0x31, 0x80, //   ##   ##
	0x3E, 0x00, //   #####
	0x0F, 0x80, //     #####
	0x31, 0x80, //   ##   ##
	0x3F, 0x80, //   #######
	0x3F, 0x00, //   ######
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2822 't' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x3C, 0x00, //   ####
	0x7E, 0x00, //  ######
	0x46, 0x00, //  #   ##
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x3F, 0x80, //   #######
	0x3F, 0x80, //   #######
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x06, 0x00, //      ##
	0x00, 0x00, //

	// @2856 'u' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0xEF, 0x00, // ### ####
	0xFF, 0x80, // #########
	0x71, 0x80, //  ###   ##
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x61, 0x80, //  ##    ##
	0x71, 0xC0, //  ###   ###
	0x71, 0xC0, //  ###   ###
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2890 'v' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x0E, 0x00, //     ###
	0x0E, 0x00, //     ###
	0x1B, 0x00, //    ## ##
	0x1B, 0x00, //    ## ##
	0x1B, 0x00, //    ## ##
	0x31, 0x80, //   ##   ##
	0x7B, 0xC0, //  #### ####
	0x7B, 0xC0, //  #### ####
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2924 'w' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x31, 0x80, //   ##   ##
	0x31, 0x80, //   ##   ##
	0x3B, 0x80, //   ### ###
	0x3F, 0x80, //   #######
	0x6E, 0xC0, //  ## ### ##
	0x64, 0xC0, //  ##  #  ##
	0xF1, 0xE0, // ####   ####
	0xF1, 0xE0, // ####   ####
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2958 'x' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x73, 0x80, //  ###  ###
	0x73, 0x80, //  ###  ###
	0x33, 0x00, //   ##  ##
	0x1E, 0x00, //    ####
	0x1E, 0x00, //    ####
	0x33, 0x00, //   ##  ##
	0x73, 0x80, //  ###  ###
	0x73, 0x80, //  ###  ###
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @2992 'y' (11 pixels wide)
	0x00, 0x00, //
	0x1F, 0xC0, //    #######
	0x1F, 0xC0, //    #######
	0x06, 0x00, //      ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x1E, 0x00, //    ####
	0x36, 0x00, //   ## ##
	0x33, 0x00, //   ##  ##
	0x61, 0x80, //  ##    ##
	0xF3, 0xC0, // ####  ####
	0xF3, 0xC0, // ####  ####
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @3026 'z' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x7F, 0x80, //  ########
	0x7F, 0x80, //  ########
	0x63, 0x00, //  ##   ##
	0x0E, 0x00, //     ###
	0x1C, 0x00, //    ###
	0x31, 0x80, //   ##   ##
	0x7F, 0x80, //  ########
	0x7F, 0x80, //  ########
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //

	// @3060 '{' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x18, 0x00, //    ##
	0x1C, 0x00, //    ###
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x06, 0x00, //      ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x1C, 0x00, //    ###
	0x18, 0x00, //    ##
	0x00, 0x00, //

	// @3094 '|' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x00, 0x00, //

	// @3128 '}' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x06, 0x00, //      ##
	0x0E, 0x00, //     ###
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x18, 0x00, //    ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0C, 0x00, //     ##
	0x0E, 0x00, //     ###
	0x06, 0x00, //      ##
	0x00, 0x00, //

	// @3162 '~' (11 pixels wide)
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x38, 0x00, //   ###
	0x7D, 0x80, //  ##### ##
	0x6F, 0x80, //  ## #####
	0x07, 0x00, //      ###
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
	0x00, 0x00, //
};


/**********************************************************
* Function Name: lcd_print_character
**********************************************************
* Will render the pixels of a character bitmap with
* the bottom left of the character starting at
* pixel (X_pixel,Y_pixel).
**********************************************************/
void lcd_print_character(
	uint16_t X_pixel,
	uint16_t Y_pixel,
  uint16_t fg_color,
	uint16_t bg_color,
	char character)
{
	lcd_set_pos(X_pixel, X_pixel + FONT_WIDTH - 1, Y_pixel, Y_pixel + FONT_HEIGHT - 1);

	lcd_wr







	uint16_t i,j;
	uint8_t data;
	uint16_t byte_index;
	uint16_t bytes_per_row;

	bytes_per_row = FONT_WIDTH / 8;
  if( (FONT_WIDTH % 8) != 0)
    bytes_per_row++;

	for (i=0;i< FONT_HEIGHT ;i++) {
		for(j= 0; j < FONT_WIDTH; j++) {
			if((j %8) == 0){
				byte_index = (i*bytes_per_row) + j/8;
				data = courierNewBitmap[byte_index];
			}
			if ( data & 0x80) lcd_write_data_u16(fg_color);
			else lcd_write_data_u16(bg_color);
			data  = data << 1;
		}
	}
}

/**********************************************************
* Function Name: lcd_print_stringXY
**********************************************************
* Summary: prints a string to the LCD screen at a specified
* XY location in specified foreground and background colors
* X will specify the number of characters across with X=0
* being the left most character position, and X=20 being
* the right most.  Y will specify the number of characters
* down the screen with Y=0 being the top of the screen and
* Y=19 being the bottom row of characters.  NOTE: There should
* be a 4 pixel offset in the X location.  The font is 11 pixels
* wide and we have 21 characters across 21*11 = 231 which leaves
* 9 pixels remaining in screen width.  We will have a padding of
* 4 pixels on the left and 5 pixels on the right.  NOTE: none
* of the hard numbers mentioned here should be used.  There
* are macros defined: CHAR_COLUMNS, CHAR_ROWS, X_PADDING in
* the associated .h file that should be used.
* Returns: Nothing
**********************************************************/
void lcd_print_stringXY(
    char *msg,
    int8_t X,
		int8_t Y,
    uint16_t fg_color,
    uint16_t bg_color


)
{

}
