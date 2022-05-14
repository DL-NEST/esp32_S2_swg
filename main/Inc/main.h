#ifndef MAIN_H
#define MAIN_H

// 界面路由
enum
{
    HOME_PAGE,      // 主页面
    WIFI_OPTIONS,   // wifi配置页面
    TIME_page,
} UI_ROUTER;


enum
{
    PAGE_SHOW,                //展示页面
    PAGE_EXIT,                //退出页面
    PAGE_HIDDEN,              //隐藏页面
    PAGE_HANDLE_1,            //页面处理1
    PAGE_HANDLE_2,            //页面处理2
    PAGE_HANDLE_3,            //页面处理3
    PAGE_LEFT_KEY,            //键盘左键
    PAGE_RIGHT_KEY,           //键盘右键
    PAGE_MID_KEY,             //键盘中键
    PAGE_RIGHT_UDP_KEY,       // UDP键值
    PAGE_CLEAN_CONSOLE,       // 清空终端
    PAGE_CLEAN_CONSOLE_INPUT, // 清空输入
} PAGE_OPTION;

#endif /* MAIN_H */
