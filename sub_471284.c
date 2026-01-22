// 函数: sub_471284
// 地址: 0x471284
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((*(arg1 + 0x358) & 8) != 0 || *(data_4b1ce0 + 0x44) == 0
        || *(*(data_4b1ce0 + 0x44) + 0x290) == 0 || arg1 == *(data_4b1ce0 + 0x44)
        || (*(arg1 + 0x277) != 1 && *(*(data_4b1ce0 + 0x44) + 0x277) == 2))
    return 

void* esi_1 = nullptr

if ((*(arg1 + 0x1c) & 0x10) == 0 && *(arg1 + 0x290) != 0
        && (*(*(arg1 + 0x290) + 0x5c) != 0 || *(arg1 + 0x277) == 1))
    esi_1 = *(arg1 + 0x290)

void* eax_2 = *(*(data_4b1ce0 + 0x44) + 0x290)

if (arg2 == 0)
    sub_450800(eax_2, esi_1)
else
    sub_4507e4(eax_2, esi_1)
