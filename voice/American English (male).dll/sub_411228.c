// 函数: sub_411228
// 地址: 0x411228
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* ecx = arg1
int32_t edx

if (arg3 == 0xffffffff)
    if (arg2 u>= 0x80000000)
        goto label_411240
    
    edx.b = 1
    ecx = sub_4033c4(sub_409fa4(0x405ff4, edx, data_413548))
else if (arg3 s< 0xffffffff)
    edx.b = 1
    ecx = sub_4033c4(sub_409fa4(0x405ff4, edx, data_413548))
else
label_411240:
    
    if (arg3 != 0)
        if (arg3 s> 0)
            edx.b = 1
            ecx = sub_4033c4(sub_409fa4(0x405ff4, edx, data_413548))
    else if (arg2 u> 0x7fffffff)
        edx.b = 1
        ecx = sub_4033c4(sub_409fa4(0x405ff4, edx, data_413548))
return (*(*ecx + 4))()
