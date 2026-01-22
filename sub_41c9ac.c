// 函数: sub_41c9ac
// 地址: 0x41c9ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_1e = arg3
int32_t* var_10 = arg1
int32_t eax_2 = *(*arg1 + 0x18)
int32_t* i

for (i = sub_403b40(arg1); i != 0; i = sub_403bf4(i))
    if (i == 0x417e80)
        break

int32_t __saved_ebp

if (i == 0)
    sub_41c960(&__saved_ebp)

int32_t* var_18 = &i

if (eax_2 == i[6])
    sub_41c960(&__saved_ebp)

int32_t eax_12
int32_t edx
edx:eax_12 = sx.q(arg2)
return (*(*arg1 + 0x18))(eax_12, edx)
