#include "../../simple_visualizer.h"
#include "util.h"
#include "layers.c"

// This function should be implemented by the keymap visualizer
// Don't change anything else than state->target_lcd_color and state->layer_text as that's the only thing
// that the simple_visualizer assumes that you are updating
// Also make sure that the buffer passed to state->layer_text remains valid until the previous animation is
// stopped. This can be done by either double buffering it or by using constant strings
static void get_visualizer_layer_and_color(visualizer_state_t* state)
{
 switch(biton32(state->status.layer)) {
    case SHELL_NAV:
      state->layer_text = "SHELL";
      state->target_lcd_color = LCD_COLOR(141, 255, 255);
      break;
    case KEY_NAV:
      state->layer_text = "KEY_NAV";
      state->target_lcd_color = LCD_COLOR(18, 255, 255);
      break;
    case KEY_SEL:
      state->layer_text = "KEY_SEL";
      state->target_lcd_color = LCD_COLOR(194, 255, 255);
      break;
    case NUMBER:
      state->layer_text = "NUMBER";
      state->target_lcd_color = LCD_COLOR(80, 255, 255);
      break;
    case SYMBOL:
      state->layer_text = "SYMBOL";
      state->target_lcd_color = LCD_COLOR(300, 255, 255);
      break;
    case BRACKETS:
      state->layer_text = "BRACKETS";
      state->target_lcd_color = LCD_COLOR(300, 255, 255);
      break;
    case SHORTCUTS:
      state->layer_text = "SHORTCUTS";
      state->target_lcd_color = LCD_COLOR(300, 255, 255);
      break;

    default:
      state->layer_text = "NONE";
      state->target_lcd_color = LCD_COLOR(0, 255, 255);
      break;
  }
}
