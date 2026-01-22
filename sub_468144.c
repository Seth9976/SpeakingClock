// 函数: sub_468144
// 地址: 0x468144
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_466d10(arg1)
int32_t eax_2 = sub_41c874(arg2)
(*(*arg2 + 0xc))()
(*(*arg2 + 0xc))()
int32_t eax_7
int32_t edx
edx:eax_7 = sx.q(eax_2)
sub_41c894(arg2, eax_7, edx)
char var_1c
int32_t var_18

if (var_1c.d == var_18 || (var_1c & 0xff) != 0x49 || (var_1c.w u>> 8).b != 0x4c)
    sub_467ce8(arg1, arg2)
else
    sub_467f7c(arg1, arg2)

char result = sub_465ac4(sub_4659bc())

if (result != 0)
    return result

int32_t uNewCount = ImageList_GetImageCount(sub_466cac(arg1))
return ImageList_SetImageCount(sub_466cac(arg1), uNewCount)
