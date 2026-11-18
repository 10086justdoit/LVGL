#include "ui.h"

static void btn_callback(lv_event_t * e)
{
  //获取事件的用户数据
  const char * str = lv_event_get_user_data(e);
  //获取事件的对象
  lv_obj_t * btn = lv_event_get_target(e);
  printf("btn click: %s\n", str);
}
/**
 *
 * 初始化当前的界面
 */

void ui_init(void)
{
/*
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
*/

//事件

lv_obj_t * scr = lv_screen_active();
lv_obj_t * btn1 = lv_button_create(scr);

// 3.设置按钮的大小和位置
lv_obj_set_size(btn1, 40, 40);
lv_obj_set_pos(btn1, 100, 100);

//添加点击事件
lv_obj_add_event_cb(btn1, btn_callback, LV_EVENT_CLICKED, "btn1");

}
