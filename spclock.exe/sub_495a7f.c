// 函数: sub_495a7f
// 地址: 0x495a7f
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*(arg1 * 2) += arg3:1.b
*arg1 += arg1.b
int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
int32_t* var_8 = arg3
int64_t* ecx
int32_t edx
ecx, edx = sub_404b88(arg2)

if (*(*(*(arg1 + 0x18) + 0x2c) + 0x20) != 0)
    int32_t* var_10_1 = &__saved_ebp
    edx, ebp = sub_495a04("alpha", edx, ecx, var_10_1)
    ecx = var_10_1

if (arg1[0x20] != 0)
    int32_t* var_10_2 = ebp
    edx, ebp = sub_495a04(0x495b5c, edx, ecx, var_10_2)
    ecx = var_10_2

if (arg1[0x22] != 0)
    int32_t* var_10_3 = ebp
    edx, ebp = sub_495a04(0x495b68, edx, ecx, var_10_3)
    ecx = var_10_3

if (arg1[0x1f] != 0)
    int32_t* var_10_4 = ebp
    edx, ebp = sub_495a04(0x495b74, edx, ecx, var_10_4)
    ecx = var_10_4

if (arg1[0x1d] != 0)
    int32_t* var_10_5 = ebp
    edx, ebp = sub_495a04(0x495b80, edx, ecx, var_10_5)
    ecx = var_10_5

if (*(arg1 + 0x28) != 0)
    ebp = sub_495a04(0x495b8c, edx, ecx, ebp)

if (*ebp[-1] == 0)
    sub_404bdc(ebp[-1], "Disabled")

void* const var_10_7 = &data_495bac
int32_t var_14 = *ebp[-1]
void* const var_18 = &data_495bb8
return sub_404f1c(ebp[-1], 3)
