// 函数: sub_450f90
// 地址: 0x450f90
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_18
sub_418a3c(arg2, arg3, &var_18)
sub_451040(arg1, &var_18)
sub_450ef8(arg1)
(*(*arg1 + 0x3c))()
sub_44f07c(arg1[0xd], 0, arg2, arg3)
sub_44f564(arg1[0xd], 0)
sub_44b814(arg1[0xd])
sub_450138(arg1)
uint32_t uFlags = zx.d(*((sub_450f44(arg1) & 0x7f) * 6 + &data_4ab84c + (zx.d(arg1[0x18].b) << 1)))
    | zx.d(*((zx.d(arg1[0x1a].b) << 1) + &data_4ab858)) | zx.d(*(arg1 + 0x69)) << 0xa
return TrackPopupMenu(sub_44b944(arg1[0xd]), uFlags, arg2, arg3, 0, *(data_4b1c30 + 0x10), nullptr)
