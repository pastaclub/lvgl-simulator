#include "lvgl.h"
#include "app_hal.h"

#include "../../asok-esp/lib/ui/ui.h"
#include "../../asok-esp/lib/ui/ui_custom.h"

int main(void) {
  lv_init();
  hal_setup();
  ui_init();
  ui_init_custom();
  hal_loop();
}
