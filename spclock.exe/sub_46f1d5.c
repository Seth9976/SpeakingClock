// 函数: sub_46f1d5
// 地址: 0x46f1d5
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += arg3.b
void* entry_ebx
*(entry_ebx + 0x56) += arg2
char result = arg2

if (result != arg3[0x270])
    arg3[0x270] = arg2
    result = sub_45fc28(arg3)
    
    if (result != 0)
        if ((arg3[0x1c] & 0x10) == 0)
        label_46f235:
            
            if (arg3[0x277] == 1 && arg3[0x273] == 2)
                return sub_45c168(arg3)
            
            int32_t dwNewLong = GetWindowLongA(sub_45f888(arg3), 0xfffffff0)
            int32_t dwNewLong_1 = GetWindowLongA(sub_45f888(arg3), 0xffffffec)
            int32_t esi
            esi.w = 0xffaa
            sub_403e64(arg3, esi, &dwNewLong, &dwNewLong_1, arg2, dwNewLong, dwNewLong_1)
            SetWindowLongA(sub_45f888(arg3), 0xfffffff0, dwNewLong)
            SetWindowLongA(sub_45f888(arg3), 0xffffffec, dwNewLong_1)
            return SetWindowPos(sub_45f888(arg3), nullptr, 0, 0, 0, 0, 0x37)
        
        if ((arg3[0x1c] & 0x10) != 0 && *(arg3 + 0x30) != 0)
            goto label_46f235

return result
