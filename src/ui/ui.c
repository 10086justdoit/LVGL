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

  // 3.设置按钮的大小和位置
  lv_obj_set_size(btn, 40, 40);
  // 4.指的是左上角的位置
  lv_obj_set_pos(btn, 10, 10);

  // 5.创建一个滑块
  lv_obj_t * slider = lv_slider_create(obj);
  // 6.设置滑块的大小和位置
  lv_obj_set_size(slider, 60, 10);
  lv_obj_set_pos(slider, 10, 80);
  //设置滑块的独有属性
  lv_slider_set_range(slider, 0, 5);
  lv_slider_set_value(slider, 2, LV_ANIM_ON);

  //延时删除组件
  lv_obj_delete_delayed(slider, 3000);
}
