#pragma once

/// <summary>
/// Условие(=, <, >)
/// </summary>
enum Conditions
{
	/// <summary>
	/// =
	/// </summary>
	equal, 
	/// <summary>
	/// >
	/// </summary>
	more, 
	/// <summary>
	/// <
	/// </summary>
	less
};

#define MORE (Conditions::more)
#define EQUAL (Conditions::equal)
#define LESS (Conditions::less)