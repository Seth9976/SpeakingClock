// 函数: sub_474294
// 地址: 0x474294
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* i_1

for (int32_t* i = *(arg1 + 0x5c); i != 0; i = i_1)
    int32_t esi_1 = i[1]
    
    if (esi_1 s< 0xffffffef)
        if (esi_1 == 0xffffffeb || esi_1 s> 0)
            DestroyCursor(i[2])
    else if (esi_1 s<= 0xfffffff4 || esi_1 == 0xffffffeb || esi_1 s> 0)
        DestroyCursor(i[2])
    
    i_1 = *i
    sub_402ec4(i)

HCURSOR result = LoadCursorA(nullptr, 0x7f00)
HCURSOR hCursor = *(arg1 + 0x60)

if (result == hCursor)
    return result

return DestroyCursor(hCursor)
