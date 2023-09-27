// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.3
// Project name: indicator_voila

#include "../ui.h"

void ui_screen_setting_screen_init(void)
{
ui_screen_setting = lv_obj_create(NULL);
lv_obj_clear_flag( ui_screen_setting, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_wifi__st_button_3 = lv_btn_create(ui_screen_setting);
lv_obj_set_width( ui_wifi__st_button_3, 60);
lv_obj_set_height( ui_wifi__st_button_3, 60);
lv_obj_set_x( ui_wifi__st_button_3, -10 );
lv_obj_set_y( ui_wifi__st_button_3, 10 );
lv_obj_set_align( ui_wifi__st_button_3, LV_ALIGN_TOP_RIGHT );
lv_obj_add_flag( ui_wifi__st_button_3, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_wifi__st_button_3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_wifi__st_button_3, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_wifi__st_button_3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_wifi__st_button_3, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );

ui_wifi_st_3 = lv_img_create(ui_wifi__st_button_3);
lv_img_set_src(ui_wifi_st_3, &ui_img_wifi_disconet_png);
lv_obj_set_width( ui_wifi_st_3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_wifi_st_3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_wifi_st_3, LV_ALIGN_TOP_RIGHT );
lv_obj_add_flag( ui_wifi_st_3, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_wifi_st_3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_time3 = lv_label_create(ui_screen_setting);
lv_obj_set_width( ui_time3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_time3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_time3, 30 );
lv_obj_set_y( ui_time3, 20 );
lv_label_set_text(ui_time3,"21:20");
lv_obj_set_style_text_font(ui_time3, &ui_font_font1, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_setting_icon = lv_img_create(ui_screen_setting);
lv_img_set_src(ui_setting_icon, &ui_img_setting_png);
lv_obj_set_width( ui_setting_icon, LV_SIZE_CONTENT);  /// 21
lv_obj_set_height( ui_setting_icon, LV_SIZE_CONTENT);   /// 21
lv_obj_set_x( ui_setting_icon, 28 );
lv_obj_set_y( ui_setting_icon, 86 );
lv_obj_add_flag( ui_setting_icon, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_setting_icon, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_setting_title = lv_label_create(ui_screen_setting);
lv_obj_set_width( ui_setting_title, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_setting_title, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_setting_title, 58 );
lv_obj_set_y( ui_setting_title, 86 );
lv_label_set_text(ui_setting_title,"Setting");
lv_obj_set_style_text_font(ui_setting_title, &ui_font_font1, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_setting_wifi = lv_btn_create(ui_screen_setting);
lv_obj_set_width( ui_setting_wifi, 140);
lv_obj_set_height( ui_setting_wifi, 200);
lv_obj_set_x( ui_setting_wifi, -148 );
lv_obj_set_y( ui_setting_wifi, 10 );
lv_obj_set_align( ui_setting_wifi, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_setting_wifi, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_setting_wifi, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_setting_wifi, lv_color_hex(0x4EACE4), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_setting_wifi, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_setting_wifi_icon = lv_img_create(ui_setting_wifi);
lv_img_set_src(ui_setting_wifi_icon, &ui_img_wifi_setting_png);
lv_obj_set_width( ui_setting_wifi_icon, LV_SIZE_CONTENT);  /// 63
lv_obj_set_height( ui_setting_wifi_icon, LV_SIZE_CONTENT);   /// 48
lv_obj_set_x( ui_setting_wifi_icon, 0 );
lv_obj_set_y( ui_setting_wifi_icon, -20 );
lv_obj_set_align( ui_setting_wifi_icon, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_setting_wifi_icon, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_setting_wifi_icon, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_setting_wifi_title = lv_label_create(ui_setting_wifi);
lv_obj_set_width( ui_setting_wifi_title, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_setting_wifi_title, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_setting_wifi_title, 0 );
lv_obj_set_y( ui_setting_wifi_title, 25 );
lv_obj_set_align( ui_setting_wifi_title, LV_ALIGN_CENTER );
lv_label_set_text(ui_setting_wifi_title,"WiFi");
lv_obj_set_style_text_font(ui_setting_wifi_title, &ui_font_font1, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_setting_display = lv_btn_create(ui_screen_setting);
lv_obj_set_width( ui_setting_display, 140);
lv_obj_set_height( ui_setting_display, 200);
lv_obj_set_x( ui_setting_display, 0 );
lv_obj_set_y( ui_setting_display, 10 );
lv_obj_set_align( ui_setting_display, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_setting_display, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_setting_display, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_setting_display, lv_color_hex(0xEEBF41), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_setting_display, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_setting_display_icon = lv_img_create(ui_setting_display);
lv_img_set_src(ui_setting_display_icon, &ui_img_display_png);
lv_obj_set_width( ui_setting_display_icon, LV_SIZE_CONTENT);  /// 44
lv_obj_set_height( ui_setting_display_icon, LV_SIZE_CONTENT);   /// 53
lv_obj_set_x( ui_setting_display_icon, 0 );
lv_obj_set_y( ui_setting_display_icon, -20 );
lv_obj_set_align( ui_setting_display_icon, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_setting_display_icon, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_setting_display_icon, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_setting_display_title = lv_label_create(ui_setting_display);
lv_obj_set_width( ui_setting_display_title, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_setting_display_title, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_setting_display_title, 0 );
lv_obj_set_y( ui_setting_display_title, 25 );
lv_obj_set_align( ui_setting_display_title, LV_ALIGN_CENTER );
lv_label_set_text(ui_setting_display_title,"Display");
lv_obj_set_style_text_font(ui_setting_display_title, &ui_font_font1, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_setting_time = lv_btn_create(ui_screen_setting);
lv_obj_set_width( ui_setting_time, 140);
lv_obj_set_height( ui_setting_time, 200);
lv_obj_set_x( ui_setting_time, 148 );
lv_obj_set_y( ui_setting_time, 10 );
lv_obj_set_align( ui_setting_time, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_setting_time, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_setting_time, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_setting_time, lv_color_hex(0x529D53), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_setting_time, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_setting_time_icon = lv_img_create(ui_setting_time);
lv_img_set_src(ui_setting_time_icon, &ui_img_time_png);
lv_obj_set_width( ui_setting_time_icon, LV_SIZE_CONTENT);  /// 56
lv_obj_set_height( ui_setting_time_icon, LV_SIZE_CONTENT);   /// 56
lv_obj_set_x( ui_setting_time_icon, 0 );
lv_obj_set_y( ui_setting_time_icon, -20 );
lv_obj_set_align( ui_setting_time_icon, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_setting_time_icon, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_setting_time_icon, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_setting_time_title = lv_label_create(ui_setting_time);
lv_obj_set_width( ui_setting_time_title, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_setting_time_title, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_setting_time_title, 0 );
lv_obj_set_y( ui_setting_time_title, 25 );
lv_obj_set_align( ui_setting_time_title, LV_ALIGN_CENTER );
lv_label_set_text(ui_setting_time_title,"Date&Time");
lv_obj_set_style_text_font(ui_setting_time_title, &ui_font_font1, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_scrolldots3 = lv_obj_create(ui_screen_setting);
lv_obj_set_width( ui_scrolldots3, 100);
lv_obj_set_height( ui_scrolldots3, 20);
lv_obj_set_x( ui_scrolldots3, 0 );
lv_obj_set_y( ui_scrolldots3, -20 );
lv_obj_set_align( ui_scrolldots3, LV_ALIGN_BOTTOM_MID );
lv_obj_clear_flag( ui_scrolldots3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_scrolldots3, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_scrolldots3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_scrolldots3, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_scrolldots3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_scrolldots31 = lv_obj_create(ui_scrolldots3);
lv_obj_set_width( ui_scrolldots31, 7);
lv_obj_set_height( ui_scrolldots31, 7);
lv_obj_set_align( ui_scrolldots31, LV_ALIGN_LEFT_MID );
lv_obj_clear_flag( ui_scrolldots31, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_scrolldots32 = lv_obj_create(ui_scrolldots3);
lv_obj_set_width( ui_scrolldots32, 7);
lv_obj_set_height( ui_scrolldots32, 7);
lv_obj_set_align( ui_scrolldots32, LV_ALIGN_RIGHT_MID );
lv_obj_clear_flag( ui_scrolldots32, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_scrolldots32, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_scrolldots32, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_scrolldots32, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_scrolldots32, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_scrolldots33 = lv_obj_create(ui_scrolldots3);
lv_obj_set_width( ui_scrolldots33, 7);
lv_obj_set_height( ui_scrolldots33, 7);
lv_obj_set_align( ui_scrolldots33, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_scrolldots33, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

lv_obj_add_event_cb(ui_wifi__st_button_3, ui_event_wifi__st_button_3, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_setting_wifi, ui_event_setting_wifi, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_setting_display, ui_event_setting_display, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_setting_time, ui_event_setting_time, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_screen_setting, ui_event_screen_setting, LV_EVENT_ALL, NULL);

}
