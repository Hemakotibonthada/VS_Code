# Python program to create a simple GUI
# calculator using Tkinter

# import everything from tkinter module
from tkinter import *
expression = ""

def equalpress():
	# Try and except statement is used
	# for handling the errors like zero
	# division error etc.

	# Put that code inside the try block
	# which may generate the error
	try:

		global expression

		# eval function evaluate the expression
		# and str function convert the result
		# into string
		total = str(eval(expression))
		
		equation.set(total)
		# initialize the expression variable
		# by empty string

	# if error is generate then handle
	# by the except block
	except:
		equation.set(" error ")
		expression = ""
def clear():
	global expression
	expression = ""
	equation.set("")
def press(num):
	# point out the global expression variable
	global expression

	# concatenation of string
	expression = expression + str(num)

	# update the expression by using set method
	equation.set(expression)



# globally declare the expression variable
def KILL():
	exit()

# Function to update expression
# in the text entry box
expression = ""


# Function to evaluate the final expression

# Driver code
def run():
        # create a GUI window
        gui = Tk()

        # set the background colour of GUI window
        gui.configure(background="light green")

        # set the title of GUI window
        gui.title("Simple Calculator")

        # set the configuration of GUI window
        gui.geometry("270x150")

        # StringVar() is the variable class
        # we create an instance of this class
        equation = StringVar()

        # create the text entry box for
        # showing the expression .
        expression_field = Entry(gui, textvariable=equation)

        # grid method is used for placing
        # the widgets at respective positions
        # in table like structure .
        expression_field.grid(columnspan=4, ipadx=70)

        # create a Buttons and place at a particular
        # location inside the root window .
        # when user press the button, the command or
        # function affiliated to that button is executed .
        button1 = Button(gui, text=' 1 ', fg='black', bg='red',
                        command=lambda: press(1), height=1, width=7)
        button1.grid(row=2, column=0)

        button2 = Button(gui, text=' 2 ', fg='black', bg='red',
                        command=lambda: press(2), height=1, width=7)
        button2.grid(row=2, column=1)

        button3 = Button(gui, text=' 3 ', fg='black', bg='red',
                        command=lambda: press(3), height=1, width=7)
        button3.grid(row=2, column=2)

        button4 = Button(gui, text=' 4 ', fg='black', bg='red',
                        command=lambda: press(4), height=1, width=7)
        button4.grid(row=3, column=0)

        button5 = Button(gui, text=' 5 ', fg='black', bg='red',
                        command=lambda: press(5), height=1, width=7)
        button5.grid(row=3, column=1)

        button6 = Button(gui, text=' 6 ', fg='black', bg='red',
                        command=lambda: press(6), height=1, width=7)
        button6.grid(row=3, column=2)

        button7 = Button(gui, text=' 7 ', fg='black', bg='red',
                        command=lambda: press(7), height=1, width=7)
        button7.grid(row=4, column=0)

        button8 = Button(gui, text=' 8 ', fg='black', bg='red',
                        command=lambda: press(8), height=1, width=7)
        button8.grid(row=4, column=1)

        button9 = Button(gui, text=' 9 ', fg='black', bg='red',
                        command=lambda: press(9), height=1, width=7)
        button9.grid(row=4, column=2)

        button0 = Button(gui, text=' 0 ', fg='black', bg='red',
                        command=lambda: press(0), height=1, width=7)
        button0.grid(row=5, column=0)

        plus = Button(gui, text=' + ', fg='black', bg='red',
                    command=lambda: press("+"), height=1, width=7)
        plus.grid(row=2, column=3)

        minus = Button(gui, text=' - ', fg='black', bg='red',
                    command=lambda: press("-"), height=1, width=7)
        minus.grid(row=3, column=3)

        multiply = Button(gui, text=' * ', fg='black', bg='red',
                        command=lambda: press("*"), height=1, width=7)
        multiply.grid(row=4, column=3)

        divide = Button(gui, text=' / ', fg='black', bg='red',
                        command=lambda: press("/"), height=1, width=7)
        divide.grid(row=5, column=3)

        equal = Button(gui, text=' = ', fg='black', bg='red',
                    command=equalpress, height=1, width=7)
        equal.grid(row=5, column=2)

        clear = Button(gui, text='Clear', fg='black', bg='red',
                    command=clear, height=1, width=7)
        clear.grid(row=5, column='1')

        Decimal= Button(gui, text='.', fg='black', bg='red',
                        command=lambda: press('.'), height=1, width=7)
        Decimal.grid(row=6, column=0)
        equalpress()
        gui.mainloop()

# Function to clear the contents
# of text entry box

if __name__ == "__main__":
    root=Tk()
    root.geometry("400x300")
    root.title("PYTHON MINOR PROJECT")
    l1=Label(text="MINOR PROJECT ON",font=("Helvetica",20,"bold","underline"),foreground="black")
    l2=Label(text="SIMPLE GUI CALCULATOR ",font=("Helvetica",20,"bold","underline"),foreground="black",pady="20")
    l3=Label(text="BY:",font=("Helvetica",20,"bold","underline"),foreground="black",pady="5")
    l4=Label(text="G.Bhavani Laxmi",font=("Helvetica",20,"bold"),foreground="black",pady="5")
    l5=Label(text="A.Manasa",font=("Helvetica",20,"bold"),foreground="black",pady="5")
    l6=Label(text="S.Alekhya",font=("Helvetica",20,"bold"),foreground="black",pady="5")



    l1.pack()
    l2.pack()
    l3.pack()
    l4.pack()
    l5.pack()
    l6.pack()

    l7=Label(text="Want to perform some basic calculations?",font=("italic",10,"bold"),foreground="black",background="violet",pady="20")

    l7.pack()
    button0 = Button(root, text=' NO ', fg='black', bg='red',command=KILL, height=1, width=7)
    button0.pack()
    button0.place(x=700,y=380)
    button01 = Button(root, text='YES', fg='black', bg='green',height=1, width=7,command=run)
    button01.pack()
    button01.place(x=770,y=380)
root.mainloop()
