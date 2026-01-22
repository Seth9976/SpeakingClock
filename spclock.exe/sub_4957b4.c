// 函数: sub_4957b4
// 地址: 0x4957b4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi

switch (arg2)
    case 0
        if (0 != arg1[8].b)
            arg1[8].b = 0
            esi.w = 0xfffd
            sub_403e64(arg1, esi, 0)
    case 1
        if (0 != *(arg1 + 0x22))
            *(arg1 + 0x22) = 0
            esi.w = 0xfffd
            sub_403e64(arg1, esi, 0)
    case 2
        if (0 != *(arg1 + 0x1f))
            *(arg1 + 0x1f) = 0
            esi.w = 0xfffd
            sub_403e64(arg1, esi, 0)
    case 3
        if (0 != *(arg1 + 0x1d))
            *(arg1 + 0x1d) = 0
            esi.w = 0xfffd
            sub_403e64(arg1, esi, 0)
    case 4
        if (0 != *(arg1 + 0x1e))
            *(arg1 + 0x1e) = 0
            arg1[7].b = 0
            
            if (*(arg1 + 0x1e) == 0)
                int32_t* eax_9 = arg1[9]
                
                if (eax_9 != 0)
                    sub_403c68(eax_9)
                    arg1[9] = 0
            else
                arg2.b = 1
                arg1[9] = sub_430618(sub_42a104+0x140, arg2)
            
            esi.w = 0xfffd
            sub_403e64(arg1, esi, 0)
    case 5
        if (0 != *(arg1 + 0x21))
            *(arg1 + 0x21) = 0
            esi.w = 0xfffd
            sub_403e64(arg1, esi, 0)
