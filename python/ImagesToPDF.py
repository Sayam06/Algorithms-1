from fpdf import FPDF
Pdf = FPDF()
list_of_images = ["one.jpg", "second.jpg","third.jpg"]
for i in list_of_images:
   Pdf.add_page()
   Pdf.image(i,x,y,w,h)
   Pdf.output("out.pdf", "F")
