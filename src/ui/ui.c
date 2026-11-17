#include "ui.h"


/**
 *
 * 初始化当前的界面
 */

void ui_init(void)
{
  // 1.获取整个硬件屏幕
  lv_obj_t * scr = lv_screen_active();

  // 2.创建一个新的框
  lv_obj_t * obj = lv_obj_create(scr);

  //创建一个按钮
  lv_obj_t * btn = lv_button_create(obj);
}

