// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.3
// Project name: indicator_voila

#include "../ui.h"

void ui_screen_time_screen_init(void)
{
ui_screen_time = lv_obj_create(NULL);
lv_obj_clear_flag( ui_screen_time, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_wifi__st_button_1 = lv_btn_create(ui_screen_time);
lv_obj_set_width( ui_wifi__st_button_1, 60);
lv_obj_set_height( ui_wifi__st_button_1, 60);
lv_obj_set_x( ui_wifi__st_button_1, -10 );
lv_obj_set_y( ui_wifi__st_button_1, 10 );
lv_obj_set_align( ui_wifi__st_button_1, LV_ALIGN_TOP_RIGHT );
lv_obj_add_flag( ui_wifi__st_button_1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_wifi__st_button_1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_wifi__st_button_1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_wifi__st_button_1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_wifi__st_button_1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );

ui_wifi_st_1 = lv_img_create(ui_wifi__st_button_1);
lv_img_set_src(ui_wifi_st_1, &ui_img_wifi_disconet_png);
lv_obj_set_width( ui_wifi_st_1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_wifi_st_1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_wifi_st_1, LV_ALIGN_TOP_RIGHT );
lv_obj_add_flag( ui_wifi_st_1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_wifi_st_1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_time1 = lv_label_create(ui_screen_time);
lv_obj_set_width( ui_time1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_time1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_time1, 6 );
lv_obj_set_y( ui_time1, -51 );
lv_obj_set_align( ui_time1, LV_ALIGN_CENTER );
lv_label_set_text(ui_time1,"00:00");
lv_obj_set_style_text_align(ui_time1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_time1, &ui_font_font4, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_date_panel = lv_obj_create(ui_screen_time);
lv_obj_set_width( ui_date_panel, 300);
lv_obj_set_height( ui_date_panel, 50);
lv_obj_set_x( ui_date_panel, 13 );
lv_obj_set_y( ui_date_panel, -140 );
lv_obj_set_align( ui_date_panel, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_date_panel, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_date_panel, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_date_panel, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_date_panel, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_date_panel, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_date = lv_label_create(ui_date_panel);
lv_obj_set_width( ui_date, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_date, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_date, 5 );
lv_obj_set_y( ui_date, 0 );
lv_obj_set_align( ui_date, LV_ALIGN_RIGHT_MID );
lv_label_set_text(ui_date,"Tuesday, July ");
lv_obj_set_style_text_color(ui_date, lv_color_hex(0xE06D3D), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_date, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_date, &ui_font_font1, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_location = lv_obj_create(ui_screen_time);
lv_obj_set_width( ui_location, 480);
lv_obj_set_height( ui_location, 50);
lv_obj_set_x( ui_location, 0 );
lv_obj_set_y( ui_location, 70 );
lv_obj_set_align( ui_location, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_location, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_location, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_location, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_location, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_grad_dir(ui_location, LV_GRAD_DIR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_location, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_location, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_color(ui_location, lv_color_hex(0x529D53), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_location, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_location, &lv_font_montserrat_26, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_location_Icon = lv_img_create(ui_location);
lv_img_set_src(ui_location_Icon, &ui_img_location_png);
lv_obj_set_width( ui_location_Icon, LV_SIZE_CONTENT);  /// 26
lv_obj_set_height( ui_location_Icon, LV_SIZE_CONTENT);   /// 26
lv_obj_set_x( ui_location_Icon, 25 );
lv_obj_set_y( ui_location_Icon, 0 );
lv_obj_set_align( ui_location_Icon, LV_ALIGN_LEFT_MID );
lv_obj_add_flag( ui_location_Icon, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_location_Icon, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_city = lv_label_create(ui_location);
lv_obj_set_width( ui_city, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_city, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_city, 60 );
lv_obj_set_y( ui_city, 0 );
lv_obj_set_align( ui_city, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_city,"Shen Zhen");

ui_sensor_temp = lv_obj_create(ui_screen_time);
lv_obj_set_width( ui_sensor_temp, 240);
lv_obj_set_height( ui_sensor_temp, 50);
lv_obj_set_x( ui_sensor_temp, 0 );
lv_obj_set_y( ui_sensor_temp, 136 );
lv_obj_set_align( ui_sensor_temp, LV_ALIGN_LEFT_MID );
lv_obj_add_flag( ui_sensor_temp, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_sensor_temp, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_sensor_temp, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_sensor_temp, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_sensor_temp, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_grad_dir(ui_sensor_temp, LV_GRAD_DIR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_sensor_temp, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_sensor_temp, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_temp_icon_1 = lv_img_create(ui_sensor_temp);
lv_img_set_src(ui_temp_icon_1, &ui_img_temp_1_png);
lv_obj_set_width( ui_temp_icon_1, LV_SIZE_CONTENT);  /// 26
lv_obj_set_height( ui_temp_icon_1, LV_SIZE_CONTENT);   /// 26
lv_obj_set_x( ui_temp_icon_1, 25 );
lv_obj_set_y( ui_temp_icon_1, -3 );
lv_obj_set_align( ui_temp_icon_1, LV_ALIGN_LEFT_MID );
lv_obj_add_flag( ui_temp_icon_1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_temp_icon_1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_temp_title_1 = lv_label_create(ui_sensor_temp);
lv_obj_set_width( ui_temp_title_1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_temp_title_1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_temp_title_1, 60 );
lv_obj_set_y( ui_temp_title_1, 0 );
lv_obj_set_align( ui_temp_title_1, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_temp_title_1,"Temp");
lv_obj_set_style_text_color(ui_temp_title_1, lv_color_hex(0xEEBF41), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_temp_title_1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_temp_title_1, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_temp_unit_1 = lv_label_create(ui_sensor_temp);
lv_obj_set_width( ui_temp_unit_1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_temp_unit_1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_temp_unit_1, LV_ALIGN_RIGHT_MID );
lv_label_set_text(ui_temp_unit_1,"°C");

ui_temp_data_1 = lv_label_create(ui_sensor_temp);
lv_obj_set_width( ui_temp_data_1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_temp_data_1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_temp_data_1, -15 );
lv_obj_set_y( ui_temp_data_1, 0 );
lv_obj_set_align( ui_temp_data_1, LV_ALIGN_RIGHT_MID );
lv_label_set_text(ui_temp_data_1,"-- ");
lv_obj_set_style_text_color(ui_temp_data_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_temp_data_1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_temp_data_1, &lv_font_montserrat_26, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor_humidity = lv_obj_create(ui_screen_time);
lv_obj_set_width( ui_sensor_humidity, 240);
lv_obj_set_height( ui_sensor_humidity, 50);
lv_obj_set_x( ui_sensor_humidity, 240 );
lv_obj_set_y( ui_sensor_humidity, 136 );
lv_obj_set_align( ui_sensor_humidity, LV_ALIGN_LEFT_MID );
lv_obj_add_flag( ui_sensor_humidity, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_sensor_humidity, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_sensor_humidity, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_sensor_humidity, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_sensor_humidity, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_color(ui_sensor_humidity, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_sensor_humidity, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_humidity_icon_1 = lv_img_create(ui_sensor_humidity);
lv_img_set_src(ui_humidity_icon_1, &ui_img_humidity_1_png);
lv_obj_set_width( ui_humidity_icon_1, LV_SIZE_CONTENT);  /// 26
lv_obj_set_height( ui_humidity_icon_1, LV_SIZE_CONTENT);   /// 26
lv_obj_set_align( ui_humidity_icon_1, LV_ALIGN_LEFT_MID );
lv_obj_add_flag( ui_humidity_icon_1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_humidity_icon_1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_humidity_title_1 = lv_label_create(ui_sensor_humidity);
lv_obj_set_width( ui_humidity_title_1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_humidity_title_1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_humidity_title_1, 35 );
lv_obj_set_y( ui_humidity_title_1, -1 );
lv_obj_set_align( ui_humidity_title_1, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_humidity_title_1,"Humidity");
lv_obj_set_style_text_color(ui_humidity_title_1, lv_color_hex(0x4EACE4), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_humidity_title_1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_humidity_title_1, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_humidity_unit_1 = lv_label_create(ui_sensor_humidity);
lv_obj_set_width( ui_humidity_unit_1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_humidity_unit_1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_humidity_unit_1, -5 );
lv_obj_set_y( ui_humidity_unit_1, 0 );
lv_obj_set_align( ui_humidity_unit_1, LV_ALIGN_RIGHT_MID );
lv_label_set_text(ui_humidity_unit_1,"%");

ui_humidity_data_1 = lv_label_create(ui_sensor_humidity);
lv_obj_set_width( ui_humidity_data_1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_humidity_data_1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_humidity_data_1, -20 );
lv_obj_set_y( ui_humidity_data_1, -1 );
lv_obj_set_align( ui_humidity_data_1, LV_ALIGN_RIGHT_MID );
lv_label_set_text(ui_humidity_data_1,"--");
lv_obj_set_style_text_color(ui_humidity_data_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_humidity_data_1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_humidity_data_1, &lv_font_montserrat_26, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_scrolldots1 = lv_obj_create(ui_screen_time);
lv_obj_set_width( ui_scrolldots1, 100);
lv_obj_set_height( ui_scrolldots1, 20);
lv_obj_set_x( ui_scrolldots1, 0 );
lv_obj_set_y( ui_scrolldots1, -20 );
lv_obj_set_align( ui_scrolldots1, LV_ALIGN_BOTTOM_MID );
lv_obj_clear_flag( ui_scrolldots1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_scrolldots1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_scrolldots1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_scrolldots1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_scrolldots1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_scrolldots11 = lv_obj_create(ui_scrolldots1);
lv_obj_set_width( ui_scrolldots11, 7);
lv_obj_set_height( ui_scrolldots11, 7);
lv_obj_set_align( ui_scrolldots11, LV_ALIGN_LEFT_MID );
lv_obj_clear_flag( ui_scrolldots11, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_scrolldots11, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_scrolldots11, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_scrolldots11, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_scrolldots11, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_scrolldots12 = lv_obj_create(ui_scrolldots1);
lv_obj_set_width( ui_scrolldots12, 7);
lv_obj_set_height( ui_scrolldots12, 7);
lv_obj_set_align( ui_scrolldots12, LV_ALIGN_RIGHT_MID );
lv_obj_clear_flag( ui_scrolldots12, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_scrolldots13 = lv_obj_create(ui_scrolldots1);
lv_obj_set_width( ui_scrolldots13, 7);
lv_obj_set_height( ui_scrolldots13, 7);
lv_obj_set_align( ui_scrolldots13, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_scrolldots13, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

lv_obj_add_event_cb(ui_wifi__st_button_1, ui_event_wifi__st_button_1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_screen_time, ui_event_screen_time, LV_EVENT_ALL, NULL);

}
