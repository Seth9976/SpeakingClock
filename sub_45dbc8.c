// 函数: sub_45dbc8
// 地址: 0x45dbc8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_10 = ecx
int32_t ebx

if (*(arg1 + 0x1d9) == 0 || (arg1[0x14].b & 0x10) == 0 || arg1[0xc] == 0
        || (*(*(arg2 + 8) + 0x18) & 8) != 0)
    ebx = 0
else
    ebx.b = 1

BOOL eax_3

if ((*(*(arg2 + 8) + 0x18) & 2) == 0)
    eax_3 = IsWindowVisible(arg1[0x6d])

if ((*(*(arg2 + 8) + 0x18) & 2) == 0 && eax_3 != 0)
    eax_3.b = 1
else
    eax_3 = 0

var_10.b = eax_3.b
BOOL eax_6

if ((*(*(arg2 + 8) + 0x18) & 1) == 0)
    eax_6 = IsWindowVisible(arg1[0x6d])

if ((*(*(arg2 + 8) + 0x18) & 1) == 0 && eax_6 != 0)
    eax_6.b = 1
else
    eax_6 = 0

var_10:1.b = eax_6.b

if (ebx.b != 0 && (var_10.b | var_10:1.b) != 0)
    sub_45f78c(arg1)

if ((*(arg1 + 0x55) & 2) == 0)
    sub_45fc34(arg1)

BOOL result = sub_4598d0(arg1, arg2)

if (ebx.b != 0)
    if ((var_10.b | var_10:1.b) == 0)
        result = *(arg2 + 8)
    
    if ((var_10.b | var_10:1.b) != 0 || (*(result + 0x18) & 0xc0) != 0)
        return sub_45f78c(arg1)

return result
