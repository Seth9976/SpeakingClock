// 函数: sub_49f394
// 地址: 0x49f394
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* result = *(arg1 + 4)
sub_403e18(result, &data_453234)

if (result == 0)
    return result

sub_403e18(*(arg1 + 4), &data_453234)
*(arg1 + 0xf0) = GetWindowLongA(sub_45f888(result), 0xfffffffc)
*(arg1 + 0xf4) = sub_424a14(sub_49f4d0, arg1)
int32_t dwNewLong = *(arg1 + 0xf4)
int32_t* eax_5 = *(arg1 + 4)
sub_403e18(eax_5, &data_453234)
return SetWindowLongA(sub_45f888(eax_5), 0xfffffffc, dwNewLong)
