#ifndef __launchpad_h
#define __launchpad_h

//LP button codes
#define LP_BTN_SCENE_A 0x08
#define LP_BTN_SCENE_B 0x18
#define LP_BTN_SCENE_C 0x28
#define LP_BTN_SCENE_D 0x38
#define LP_BTN_SCENE_E 0x48
#define LP_BTN_SCENE_F 0x58
#define LP_BTN_SCENE_G 0x68
#define LP_BTN_SCENE_H 0x78

//Launchpad LED velocity values
#define LP_LED_OFF 0x0C
#define LP_LED_RED_LOW 0x0D
#define LP_LED_RED_FULL 0x0F
#define LP_LED_AMBER_LOW 0x1D
#define LP_LED_AMBER_FULL 0x3F
#define LP_LED_YELLOW_FULL 0x3E
#define LP_LED_GREEN_LOW 0x1C
#define LP_LED_GREEN_FULL 0x3C
#define LP_LED_RED_FLASH 0x0B
#define LP_LED_AMBER_FLASH 0x3B
#define LP_LED_YELLOW_FLASH 0x3A
#define LP_LED_GREEN_FLASH 0x38

int lp_get_port();
int lp_grid_buttoncode(int val);
int lp_grid_button_hex_to_int(int val);
int lp_is_hex_code_grid_button(int val); // Is the parameter code a LP grid button? 0 = false, 1 = true

void lp_check_active_order();
void lp_draw_grid(int start, int num, int color);
void lp_initialize();
void lp_resetall();
void lp_set_grid_led(int num, int color);
void lp_set_port(int port);
void lp_handle_midi(int *st);
void lp_update_grid();
void lp_update_vu_meters();

#endif
