// 函数: sub_48d638
// 地址: 0x48d638
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_42bcec(arg3[5], 0)
sub_42b99c(arg3[4], 5)
sub_42bbb0(arg3[5], arg8)
uint32_t edi = zx.d(arg6)
int32_t var_18
sub_406c1c(arg2[2], arg2[1] + edi, arg2[2] - edi, &var_18, arg2[3])
sub_42c258(arg3, &var_18)
sub_406c1c(arg2[2], arg2[3] - edi, *arg2 + edi, &var_18, arg2[3])
sub_42c258(arg3, &var_18)

if (arg4 == 0)
    sub_42bbb0(arg3[5], arg7)
    sub_406c1c(arg2[2], arg2[1], arg2[2] - edi, &var_18, arg2[1] + edi)
    sub_42c258(arg3, &var_18)
    sub_406c1c(*arg2 + edi, arg2[3] - edi, *arg2, &var_18, arg2[3])
    sub_42c258(arg3, &var_18)

sub_406c1c(arg2[2] - edi, arg2[1], *arg2, &var_18, arg2[3] - edi)
*arg2 = var_18
void* edi_2 = &arg2[1]
void var_14
void* esi_1 = &var_14
*edi_2 = *esi_1
void* edi_3 = edi_2 + 4
void* esi_2 = esi_1 + 4
*edi_3 = *esi_2
*(edi_3 + 4) = *(esi_2 + 4)
sub_42bbb0(arg3[5], arg1)

if (zx.d(arg5) - 1 s>= 0)
    int32_t i_1 = zx.d(arg5)
    int32_t i
    
    do
        sub_42c294(arg3, arg2)
        InflateRect(arg2, 0xffffffff, 0xffffffff)
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_42b9d4(arg3[4], 1)
int32_t result
result.b = 1
return result
