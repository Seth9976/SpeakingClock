// 函数: sub_487208
// 地址: 0x487208
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404b88(arg2)

switch (zx.d(*(arg1 + 0x24)))
    case 0
        sub_404bdc(arg2, "Disabled")
    case 1
        sub_404bdc(arg2, "sunken")
    case 2
        sub_404bdc(arg2, "raised")
    case 3
        sub_404bdc(arg2, "sunken shadow")
    case 4
        sub_404bdc(arg2, "raised shadow")
    case 5
        sub_404bdc(arg2, "PColor sunken")
    case 6
        sub_404b88(arg2)
    case 7
        sub_404bdc(arg2, "shadow")
    case 8
        sub_404bdc(arg2, "outline")
    case 9
        sub_404bdc(arg2, "extrude")
    case 0xa
        sub_404bdc(arg2, "extrude enh")

void* const var_c = &data_4873d0
int64_t* var_10 = *arg2
void* const var_14 = &data_4873dc
return sub_404f1c(arg2, 3)
