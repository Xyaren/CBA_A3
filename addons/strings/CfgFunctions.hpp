// -----------------------------------------------------------------------------
// Automatically generated by 'functions_config.rb'
// DO NOT MANUALLY EDIT THIS FILE!
// -----------------------------------------------------------------------------

class CfgFunctions
{
	class CBA
	{
		class Strings
		{
			// CBA_fnc_capitalize
			class capitalize
			{
				description = "Upper case the first letter of the string, lower case the rest.";
				file = "\x\cba\addons\strings\fnc_capitalize.sqf";
			};
			// CBA_fnc_find
			class find
			{
				description = "Finds a string within another string.";
				file = "\x\cba\addons\strings\fnc_find.sqf";
			};
			// CBA_fnc_formatElapsedTime
			class formatElapsedTime
			{
				description = "Formats time in seconds according to a format. Intended to show time elapsed, rather than time-of-day.";
				file = "\x\cba\addons\strings\fnc_formatElapsedTime.sqf";
			};
			// CBA_fnc_formatNumber
			class formatNumber
			{
				description = "Formats a number to a minimum integer width and to a specific number of decimal places (including padding with 0s and correct rounding). Numbers are always displayed fully, never being condensed using an exponent (e.g. the number 1.234e9 would be given as ""1234000000"").";
				file = "\x\cba\addons\strings\fnc_formatNumber.sqf";
			};
			// CBA_fnc_leftTrim
			class leftTrim
			{
				description = "Trims white-space (space, tab, newline) from the left end of a string.";
				file = "\x\cba\addons\strings\fnc_leftTrim.sqf";
			};
			// CBA_fnc_replace
			class replace
			{
				description = "Replaces substrings within a string. Case-dependent.";
				file = "\x\cba\addons\strings\fnc_replace.sqf";
			};
			// CBA_fnc_rightTrim
			class rightTrim
			{
				description = "Trims white-space (space, tab, newline) from the right end of a string.";
				file = "\x\cba\addons\strings\fnc_rightTrim.sqf";
			};
			// CBA_fnc_split
			class split
			{
				description = "Splits a string into substrings using a separator. Inverse of <CBA_fnc_join>.";
				file = "\x\cba\addons\strings\fnc_split.sqf";
			};
			// CBA_fnc_strLen
			class strLen
			{
				description = "Counts the number of characters in a string.";
				file = "\x\cba\addons\strings\fnc_strLen.sqf";
			};
			// CBA_fnc_trim
			class trim
			{
				description = "Trims white-space (space, tab, newline) from the both ends of a string.";
				file = "\x\cba\addons\strings\fnc_trim.sqf";
			};
			// CBA_fnc_testStrings
			class testStrings
			{
				description = "Internal Self Check. Check the RPT file for results.";
				file = "\x\cba\addons\strings\test.sqf";
			};
		};
	};
};
