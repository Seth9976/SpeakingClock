// 函数: sub_445ff0
// 地址: 0x445ff0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_10 = arg3
arg2[3] = 0
int32_t result = *arg2

if (result == 0x110 && (*(arg1 + 0x66) & 1) == 0)
    return result

if (result == 0x4e)
    void* esi_1 = arg2[2]
    
    switch (*(esi_1 + 8) + 0x260)
        case 0
            if (arg2[2] != 0)
                var_10.b = 1
                esi_1.w = 0xffe9
                sub_403e64(arg1, esi_1, arg2[2], &var_10, var_10)
                arg2[3] = zx.d(var_10.b)
        case 1
            int32_t eax_9 = *(*(esi_1 + 0xc) + 0x18)
            
            if (eax_9 != arg1[0x1c])
                arg1[0x1c] = eax_9
                esi_1.w = 0xffea
                sub_403e64(arg1, esi_1)
        case 2
            *(esi_1 + 0xc)
            
            if (sub_445fc4(arg1) == 0)
                arg2[3] = 1
                return SetWindowLongA(arg1[0xf], 0, 1)
        case 5
            esi_1.w = 0xffeb
            sub_403e64(arg1, esi_1)
        case 6
            esi_1.w = 0xffec
            sub_403e64(arg1, esi_1)
        case 7
            esi_1.w = 0xffee
            sub_403e64(arg1, esi_1)

return sub_445630(arg1)
