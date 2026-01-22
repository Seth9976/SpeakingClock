// 函数: sub_44a9d0
// 地址: 0x44a9d0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int64_t* var_c = nullptr
int64_t* var_10 = nullptr
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
var_8:2.w = arg1
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char ebx_1 = var_8:2.b
uint32_t eax = zx.d(ebx_1)

if (eax s>= 0x2d)
    if (eax s>= 0x41)
        if (eax - 0x41 u< 0x1a)
            sub_404d70()
        else if (eax - 0x60 u< 0xa)
            sub_404d70()
        else if (eax - 0x70 u< 0x18)
            int32_t ecx
            sub_409340(ecx, &var_10)
            sub_404ea0(&var_c, 0x44abc4, var_10)
        else
            sub_44a97c(var_8:2.b, &var_c)
    else if (eax - 0x2d u< 2)
        sub_404c20(&var_c, (&data_4ab690)[zx.d(ebx_1 + 0xd)])
    else if (eax - 0x30 u< 0xa)
        sub_404d70()
    else
        sub_44a97c(var_8:2.b, &var_c)
else if (eax - 8 u< 2)
    sub_404c20(&var_c, *((zx.d(ebx_1) << 2) + &data_4ab724))
else if (eax == 0xd)
    sub_404c20(&var_c, data_4ab750)
else if (eax == 0x1b)
    sub_404c20(&var_c, data_4ab74c)
else if (eax - 0x20 u< 9)
    sub_404c20(&var_c, *((zx.d(ebx_1 + 4) << 2) + &data_4ab6c4))
else
    sub_44a97c(var_8:2.b, &var_c)

if (var_c == 0)
    sub_404b88(arg2)
else
    sub_404b88(arg2)
    
    if ((var_8:3.b & 0x20) != 0)
        sub_404e54(arg2, data_4ab780)
    
    if ((var_8:3.b & 0x40) != 0)
        sub_404e54(arg2, data_4ab784)
    
    if ((var_8:3.b & 0x80) != 0)
        sub_404e54(arg2, data_4ab788)
    
    sub_404e54(arg2, var_c)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_1c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_44abb6
return sub_404bac(&var_10, 2)
