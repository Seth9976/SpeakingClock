// 函数: sub_457f4c
// 地址: 0x457f4c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg3

if (sub_464be4(data_4b1c40) != 0)
    sub_464ca4(data_4b1c40, 0)

if (sub_403df4(arg1, 0x46a11c) != 0 && *(arg1 + 0x8f) != 1)
    sub_40451c(sub_40cf6c(sub_417654+0x48, 0x46a101, data_4ac340))

uint32_t result = sub_458afc(arg1)

if (data_4b1c64 == 0 || data_4b1c64 == 0xffffffff)
    result = 0
    data_4b1c64 = 0
    
    if ((arg1[0x15].b & 1) != 0)
        int32_t point
        GetCursorPos(&point)
        int32_t point_1
        sub_457310(arg1, &point, &point_1)
        point = point_1
        int16_t var_10
        int16_t var_16_1 = var_10
        result = sub_458ac8(arg1, point.w.d)
    
    if (esi s< 0)
        result = data_4b1c40
        esi = *(result + 8)
    
    if (data_4b1c64 != 0xffffffff)
        return sub_4557a0(arg1, arg2, esi)

return result
