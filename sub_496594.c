// 函数: sub_496594
// 地址: 0x496594
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404b88(arg2)
char eax_1 = *(arg1 + 0x30)

if (eax_1 u< 1)
    sub_404bdc(arg2, "Custom style")
else if (eax_1 == 1)
    sub_404bdc(arg2, "Standard style")
else if (eax_1 == 2)
    sub_404bdc(arg2, "Edged style")
else if (eax_1 == 3)
    sub_404bdc(arg2, "Windows style")

void* const var_c = &data_49666c
int32_t var_10 = *arg2
void* const var_14 = &data_496678
return sub_404f1c(arg2, 3)
