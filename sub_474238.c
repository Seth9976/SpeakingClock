// 函数: sub_474238
// 地址: 0x474238
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 + 0x60) = LoadCursorA(nullptr, 0x7f00)
int32_t i = 0xffffffea
void* esi = &data_4abad0
int32_t* result

do
    HINSTANCE hInstance
    
    if (i s< 0xffffffef)
        if (i != 0xffffffeb)
            hInstance = nullptr
        else
            hInstance = data_4af7f4
    else if (i s<= 0xfffffff4 || i == 0xffffffeb)
        hInstance = data_4af7f4
    else
        hInstance = nullptr
    
    result = sub_47433c(arg1, i, LoadCursorA(hInstance, *esi))
    i += 1
    esi += 4
while (i != 0xffffffff)

return result
