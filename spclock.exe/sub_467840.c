// 函数: sub_467840
// 地址: 0x467840
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == 0)
    return sub_466d10(arg1)

int32_t ecx

if (sub_403df4(arg2, 0x466848) == 0)
    return sub_41a70c(ecx, arg2)
sub_4673c4()
*(arg1 + 0x41) = *(arg2 + 0x41)
*(arg1 + 0x43) = *(arg2 + 0x43)
sub_467a30(arg1, arg2[0x10].b)
*(arg1 + 0x42) = *(arg2 + 0x42)
sub_466bb0(arg1, sub_466cac(arg2))

if (sub_466ad8(arg1) != 0)
    ImageList_SetIconSize(sub_466cac(arg1), arg1[0xd], arg1[0xc])
else
    sub_466ae0(arg1)

sub_4673d0(arg1, sub_4668f4(ImageList_GetBkColor(sub_466cac(arg2))))
arg1[0x12] = arg2[0x12]
return sub_467820(arg1, arg2)
