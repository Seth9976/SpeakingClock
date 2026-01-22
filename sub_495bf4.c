// 函数: sub_495bf4
// 地址: 0x495bf4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi = arg2

if (*(arg1 + 0x1e) != 0 && *(arg1 + 0x1c) != 0)
    return sub_42c1ac(0, 0, sub_430bec(esi), *(arg1 + 0x24))

void var_20
void var_14

if (*(arg1 + 0x20) != 0)
    sub_418a3c(0, 0, &var_20)
    sub_418a64((*(*esi + 0x2c))(&var_14, (*(*esi + 0x20))(&var_20) - 1) - 1, 0, 0)
    sub_493a2c(esi, &var_14, esi, var_20)

if (*(arg1 + 0x22) != 0)
    sub_418a3c(0, 0, &var_20)
    sub_418a64((*(*esi + 0x2c))(&var_14, (*(*esi + 0x20))(&var_20) - 1) - 1, 0, 0)
    sub_493c28(esi, &var_14, esi, var_20)

void var_18

if (*(arg1 + 0x1f) != 0)
    sub_418a3c(0, 0, &var_20)
    sub_418a64((*(*esi + 0x2c))(&var_18, (*(*esi + 0x20))(&var_20) - 1) - 1, 0, 0)
    sub_493834(esi, &var_18, esi)

if (*(arg1 + 0x1d) != 0)
    sub_418a3c(0, 0, &var_20)
    sub_418a64((*(*esi + 0x2c))(&var_18, (*(*esi + 0x20))(&var_20) - 1) - 1, 0, 0)
    sub_4940a4(esi, &var_18, esi)

if (*(arg1 + 0x21) != 0)
    arg2.b = 1
    sub_431be0(esi, arg2.b)

if (*(arg1 + 0x28) != 0)
    sub_418a3c(0, 0, &var_20)
    sub_418a64((*(*esi + 0x2c))(&var_18, (*(*esi + 0x20))(zx.d(*(arg1 + 0x28)), &var_20)), 0, 0)
    sub_4941c0(esi, &var_18, esi)

void* result
void* ebx_1
int32_t* esi_1
result, ebx_1, esi_1 = sub_4954bc(*(arg1 + 0x18), esi)

if (*(ebx_1 + 0x1e) != 0 && *(ebx_1 + 0x1c) == 0)
    result = sub_42c1ac(0, 0, sub_430bec(*(ebx_1 + 0x24)), esi_1)
    *(ebx_1 + 0x1c) = 1

return result
