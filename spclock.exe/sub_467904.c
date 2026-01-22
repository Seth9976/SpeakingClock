// 函数: sub_467904
// 地址: 0x467904
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (sub_403df4(arg2, 0x466848) == 0)
    return sub_41a7f0(arg1, arg2)

*(arg2 + 0x41) = *(arg1 + 0x41)
*(arg2 + 0x43) = *(arg1 + 0x43)
sub_467a30(arg2, arg1[0x10].b)
*(arg2 + 0x42) = *(arg1 + 0x42)
arg2[0x12] = arg1[0x12]
sub_4673c4()
sub_466bb0(arg2, sub_466cac(arg1))

if (sub_466ad8(arg2) != 0)
    ImageList_SetIconSize(sub_466cac(arg2), arg2[0xd], arg2[0xc])
else
    sub_466ae0(arg2)

sub_4673d0(arg2, sub_4668f4(ImageList_GetBkColor(sub_466cac(arg1))))
return sub_467820(arg2, arg1)
