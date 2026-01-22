// 函数: sub_45c75c
// 地址: 0x45c75c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = arg3
int32_t eax_1 = sub_406c40(GetMessagePos())
int32_t var_128 = sx.d(eax_1.w)
int32_t var_124 = sx.d(eax_1:2.w)
int32_t var_134
sub_457310(arg1, &var_128, &var_134)

if (ebx == 0)
    ebx = sub_45c698(0, arg1, 0, 0)

if (ebx == 0)
    return 0

int32_t var_20
int32_t var_130

if (arg1 == ebx)
    var_20 = var_134
    int32_t var_1c_2 = var_130
else
    var_20 = var_134 - *(ebx + 0x40)
    int32_t var_1c_1 = var_130 - *(ebx + 0x44)
uint32_t var_18_1 = zx.d(*(arg2 + 8))
int32_t var_10_1 = *(arg2 + 4)
uint32_t eax_15 = zx.d(*(arg2 + 0xa))
char var_14_1
char var_14_2
char var_14_3
char var_14_4

if (eax_15 s>= 0x201)
    if (eax_15 - 0x201 u< 2)
        var_14_1 = 0
    else if (eax_15 - 0x204 u< 2)
        var_14_3 = 1
    else if (eax_15 - 0x207 u< 2)
        var_14_2 = 2
    else
        var_14_4 = 0
else if (eax_15 - 0xa1 u< 2)
    var_14_1 = 0
else if (eax_15 - 0xa4 u< 2)
    var_14_3 = 1
else if (eax_15 - 0xa7 u< 2)
    var_14_2 = 2
else
    var_14_4 = 0
uint8_t keyState[0x100]
GetKeyboardState(&keyState)
char var_13_1 = sub_46be14(&keyState)
sub_458ac8(ebx, &var_20)
*(arg2 + 0xc) = 0
int32_t result
result.b = 1
return result
