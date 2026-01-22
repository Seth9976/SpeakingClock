// 函数: sub_471d9c
// 地址: 0x471d9c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((arg2[1] & 0xfff0) == 0xf020 && arg1 == *(data_4b1ce0 + 0x44))
    sub_475c8c(data_4b1ce0, arg2)
else if ((arg2[1] & 0xfff0) != 0xf010 || (arg1[7].b & 0x10) != 0 || *(arg1 + 0x5b) == 0
        || *(arg1 + 0x273) == 1)
    sub_45e95c(arg1, arg2)

int32_t result = arg2[1] & 0xfff0

if ((result == 0xf020 || result == 0xf120) && (arg1[7].b & 0x10) == 0 && *(arg1 + 0x5b) != 0)
    return (*(*arg1 + 0x5c))()

return result
